/*
 * XREFs of AstLogIoctl @ 0x140927010
 * Callers:
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     memcpy_s @ 0x14053E830 (memcpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall AstLogIoctl(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r11
  int v7; // r9d
  unsigned int v8; // r8d
  unsigned __int64 v9; // rcx
  unsigned int v10; // r10d
  _BYTE *v11; // rdx
  rsize_t v12; // r9
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v20; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+70h] [rbp-98h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+80h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]

  if ( dword_140E06E00 )
  {
    if ( AstIsActive )
    {
      if ( (*(_BYTE *)(a1 - 22) & 2) != 0 )
      {
        v4 = a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 22) & 3];
        if ( v4 )
        {
          v5 = (unsigned int)AstIoctlBloomFilter;
          v6 = (a1 >> 4) ^ ((unsigned __int64)a2 << 32);
          v7 = 37 * dword_140F85110;
          if ( ((*(char *)((((HIBYTE(v6)
                            + 442596621 * (v7 + (unsigned __int8)(a1 >> 4))
                            + 37
                            * (BYTE6(v6)
                             + 37
                             * (BYTE5(v6)
                              + 37
                              * (BYTE4(v6)
                               + 37
                               * (((unsigned int)(a1 >> 4) >> 24)
                                + 37
                                * ((unsigned __int8)((unsigned int)(a1 >> 4) >> 16)
                                 + 37 * (unsigned __int8)((unsigned __int16)(a1 >> 4) >> 8)))))))
                           % AstIoctlBloomFilter) >> 3)
                         + qword_140F85108) >> (((HIBYTE(v6)
                                                + 442596621 * (v7 + (unsigned __int8)(a1 >> 4))
                                                + 37
                                                * (BYTE6(v6)
                                                 + 37
                                                 * (BYTE5(v6)
                                                  + 37
                                                  * (BYTE4(v6)
                                                   + 37
                                                   * (((unsigned int)(a1 >> 4) >> 24)
                                                    + 37
                                                    * ((unsigned __int8)((unsigned int)(a1 >> 4) >> 16)
                                                     + 37 * (unsigned __int8)((unsigned __int16)(a1 >> 4) >> 8)))))))
                                               % AstIoctlBloomFilter) & 7)) & 1) == 0
            || (v8 = (((a1 >> 4) ^ ((unsigned __int64)a2 << 32)) >> 56)
                   + 442596621 * (v7 + (unsigned __int8)(a1 >> 4))
                   + 37
                   * ((unsigned __int8)(((a1 >> 4) ^ ((unsigned __int64)a2 << 32)) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((a1 >> 4) ^ ((unsigned __int64)a2 << 32)) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((a1 >> 4) ^ ((unsigned __int64)a2 << 32)) >> 32)
                      + 37
                      * (((unsigned int)(a1 >> 4) >> 24)
                       + 37
                       * ((unsigned __int8)((unsigned int)(a1 >> 4) >> 16)
                        + 37 * (unsigned __int8)((unsigned __int16)(a1 >> 4) >> 8)))))),
                ((*(char *)(((unsigned __int64)(HIWORD(v8) % (unsigned int)AstIoctlBloomFilter) >> 3) + qword_140F85108) >> ((HIWORD(v8) % (unsigned int)AstIoctlBloomFilter) & 7)) & 1) == 0)
            || ((*(char *)(((v6 % (unsigned int)AstIoctlBloomFilter) >> 3) + qword_140F85108) >> ((v6
                                                                                                 % (unsigned int)AstIoctlBloomFilter) & 7)) & 1) == 0 )
          {
            v9 = (HIBYTE(v6)
                + 442596621 * (v7 + (unsigned __int8)v6)
                + 37
                * (BYTE6(v6)
                 + 37
                 * (BYTE5(v6) + 37 * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6)))))))
               % AstIoctlBloomFilter;
            v10 = ((HIBYTE(v6)
                  + 442596621 * (v7 + (unsigned __int8)v6)
                  + 37
                  * (BYTE6(v6)
                   + 37
                   * (BYTE5(v6) + 37 * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6))))))) >> 16)
                % AstIoctlBloomFilter;
            *(_BYTE *)((v9 >> 3) + qword_140F85108) |= 1 << (v9 & 7);
            *(_BYTE *)(qword_140F85108 + ((unsigned __int64)v10 >> 3)) |= 1 << (v10 & 7);
            v11 = (_BYTE *)(qword_140F85108
                          + ((unsigned __int64)(unsigned int)(((a1 >> 4) ^ ((unsigned __int64)a2 << 32)) % v5) >> 3));
            *v11 |= 1 << ((v6 % v5) & 7);
            memset_0(&v18, 0, 0x40uLL);
            v12 = *(unsigned __int16 *)(v4 + 8);
            if ( *(unsigned __int16 *)(v4 + 8) >= 0x40u )
              v12 = 64LL;
            memcpy_s(&v18, 0x40uLL, *(const void **)(v4 + 16), v12);
            v18 ^= v22 << 8;
            v19 ^= v23 << 8;
            v20 ^= v24 << 8;
            v21 ^= v25 << 8;
            if ( (unsigned int)dword_140E06E00 > 5
              && (qword_140E06E10 & 0x200000000000LL) != 0
              && (qword_140E06E18 & 0x200000000000LL) == qword_140E06E18 )
            {
              v17 = HIBYTE(v21)
                  + 0x288D4C21D6A4D26DLL * (unsigned __int8)v20
                  + 0x40B7CD9739B584A1LL * HIBYTE(v18)
                  + 0xDC6C00E405D269C1uLL * HIBYTE(v19)
                  + 0x407AFAF12AFB592DLL * (unsigned __int8)v18
                  + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v19
                  + 0x4FE1DAF580C363FDLL * BYTE4(v18)
                  + 0x65EC3D53F206D09DLL * BYTE4(v19)
                  + 0xC8228AB72E6AE889uLL * BYTE1(v19)
                  + 0x3433B6F080FF8F35LL * BYTE2(v20)
                  + 0x5A90B6DB573C2B45LL * BYTE6(v18)
                  + 0x16EA6DB39BB240F9LL * BYTE5(v18)
                  + 0xC53F5E946719795LL * BYTE2(v19)
                  + 0xC378F206849F0269uLL * BYTE1(v18)
                  + 0xBB24DD21FAFC26B1uLL * BYTE3(v19)
                  + 0x8BA4A57B9C3D7391uLL * BYTE3(v18)
                  + 0xBD90C36322378919uLL * BYTE5(v19)
                  + 0x2ECBEADD94E1B3F5LL * BYTE2(v18)
                  + 0xDB9C20F4D76948E5uLL * BYTE6(v19)
                  + 0x8B7970C2A4EFB2A9uLL * BYTE1(v20)
                  + 37
                  * (BYTE6(v21)
                   + 37
                   * (BYTE5(v21)
                    + 37
                    * (BYTE4(v21)
                     + 37
                     * (BYTE3(v21)
                      + 37
                      * (BYTE2(v21)
                       + 37
                       * (BYTE1(v21)
                        + 37
                        * ((unsigned __int8)v21
                         + 37
                         * (HIBYTE(v20) + 37 * (BYTE6(v20) + 37 * (BYTE5(v20) + 37 * (BYTE4(v20) + 37LL * BYTE3(v20))))))))))))
                  + 0x4D9751421B9040BLL;
              v15 = 0x80000000LL;
              v28 = 8LL;
              v27 = &v15;
              v16 = a1;
              v29 = (__int64 *)&v16;
              v30 = 8LL;
              v31 = (int *)&v13;
              v13 = a2;
              v33 = &v17;
              v14 = *(unsigned __int16 *)(v4 + 8);
              v35 = &v14;
              v32 = 4LL;
              v34 = 8LL;
              v36 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06E00,
                (unsigned __int8 *)byte_140048335,
                0LL,
                0LL,
                7u,
                &v26);
            }
          }
        }
      }
    }
  }
}
