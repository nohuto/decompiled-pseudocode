/*
 * XREFs of StorLogMFNDSetOperationInfo @ 0x1400CD4C0
 * Callers:
 *     StorSetMFNDOperationPrivilege @ 0x1400CD8C8 (StorSetMFNDOperationPrivilege.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer @ 0x1400C94E8 (McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDSetOperationInfo(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int16 *v14; // r11
  __int16 v15; // r10
  __int16 v16; // r11
  __int64 v17; // r9
  const wchar_t *v18; // r9
  __int128 v20; // [rsp+90h] [rbp-80h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-60h] BYREF
  char v23; // [rsp+B8h] [rbp-58h]
  __int128 v24; // [rsp+C0h] [rbp-50h] BYREF
  int v25; // [rsp+D0h] [rbp-40h]
  char v26; // [rsp+D4h] [rbp-3Ch]
  __int128 v27; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-28h]
  __int64 v29; // [rsp+F8h] [rbp-18h]
  char v30; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v25 = 0;
    v20 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0;
    v10 = *(_OWORD *)(a1 + 5128);
    v11 = *(_QWORD *)(a1 + 16);
    v22 = 0LL;
    v21 = v10;
    v23 = 0;
    v24 = 0LL;
    LOWORD(v12) = RaidDriverGetName(v11, (__int64)&v20);
    v14 = *(__int16 **)(a1 + 6064);
    if ( v14 )
    {
      v27 = *(_OWORD *)(v14 + 12);
      v28 = *(_OWORD *)(v14 + 20);
      v29 = *((_QWORD *)v14 + 7);
      v22 = *((_QWORD *)v14 + 8);
      v24 = *(_OWORD *)(v14 + 2);
      v12 = *((_DWORD *)v14 + 5);
      v25 = v12;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( v14 )
      {
        v15 = v14[1];
        v16 = *v14;
      }
      else
      {
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      v17 = *(_QWORD *)(a1 + 6224);
      if ( !v17 || (v18 = *(const wchar_t **)(v17 + 24)) == 0LL )
        v18 = (const wchar_t *)&unk_140153274;
      LOWORD(v12) = McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer(
                      v13,
                      (a5 >> 9) & 7,
                      a5 >> 1,
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v21,
                      *((const wchar_t **)&v20 + 1),
                      (const char *)&v24,
                      v18,
                      v16,
                      v15,
                      (const char *)&v27,
                      (const char *)&v22,
                      a2,
                      a3,
                      a4,
                      a5 >> 1,
                      (a5 >> 9) & 7,
                      a6);
    }
  }
  return v12;
}
