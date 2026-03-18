/*
 * XREFs of UsbhEtwLogPortInformation @ 0x140027A6C
 * Callers:
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 *     UsbhGetExtendedHubInformation @ 0x14003C4C4 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

_DWORD *__fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // r14
  unsigned __int16 v4; // di
  __int64 v5; // r12
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r8
  _DWORD *v19; // rdx
  __int64 v20; // r9
  unsigned __int16 *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rdx
  _DWORD *v26; // r8
  __int64 v27; // r9
  unsigned __int16 *v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rsi
  _DWORD *v32; // rdx
  _DWORD *v33; // r8
  __int64 v34; // r9
  unsigned __int16 *v35; // rcx
  int v36; // eax
  __int64 v37; // [rsp+50h] [rbp-61h]
  int v38; // [rsp+68h] [rbp-49h] BYREF
  int v39; // [rsp+70h] [rbp-41h]
  int v40; // [rsp+74h] [rbp-3Dh]
  __int128 v41; // [rsp+78h] [rbp-39h] BYREF
  __int128 v42; // [rsp+88h] [rbp-29h]
  int v43; // [rsp+98h] [rbp-19h]
  _QWORD v44[2]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-1h] BYREF
  int v46; // [rsp+B8h] [rbp+7h]
  __int64 v47; // [rsp+C0h] [rbp+Fh] BYREF
  int v48; // [rsp+C8h] [rbp+17h]
  __int64 v49; // [rsp+D0h] [rbp+1Fh] BYREF
  int v50; // [rsp+D8h] [rbp+27h]

  result = 0LL;
  v44[0] = 0LL;
  LOWORD(v44[1]) = 0;
  if ( dword_1400706F0 )
  {
    v3 = FdoExt(a1);
    v4 = 1;
    v5 = *((_QWORD *)v3 + 377);
    result = FdoExt(a1);
    if ( *((_BYTE *)result + 2938) )
    {
      do
      {
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v6 = *(_QWORD *)(a1 + 64);
            if ( v6 )
            {
              v39 = 1413771367;
              v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
              v8 = *(_DWORD *)(v6 + 884);
              v9 = *(_QWORD *)(v6 + 888);
              v10 = 32LL * ((v7 - 1) & v8);
              *(_DWORD *)(v10 + v9) = v39;
              *(_QWORD *)(v10 + v9 + 16) = v4;
              *(_QWORD *)(v10 + v9 + 8) = 0LL;
              *(_QWORD *)(v10 + v9 + 24) = 0LL;
            }
          }
        }
        if ( v4 )
        {
          v11 = FdoExt(a1);
          if ( v4 <= *((unsigned __int8 *)FdoExt(a1) + 2938) )
          {
            v12 = *((_QWORD *)v11 + 382);
            if ( v12 )
            {
              if ( (UsbhLogMask & 8) != 0 )
              {
                if ( a1 )
                {
                  v13 = *(_QWORD *)(a1 + 64);
                  if ( v13 )
                  {
                    v40 = 1044672615;
                    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
                    v15 = *(_DWORD *)(v13 + 884);
                    v16 = *(_QWORD *)(v13 + 888);
                    v17 = 32LL * ((v14 - 1) & v15);
                    *(_DWORD *)(v17 + v16) = v40;
                    *(_QWORD *)(v17 + v16 + 16) = v4;
                    *(_QWORD *)(v17 + v16 + 8) = 0LL;
                    *(_QWORD *)(v17 + v16 + 24) = 2928LL * v4 + v12 - 2928;
                  }
                }
              }
            }
          }
        }
        v38 = v4;
        v45 = 0LL;
        v46 = 0;
        v41 = 0LL;
        v43 = 0;
        v42 = 0LL;
        if ( dword_1400706F0 )
        {
          v18 = FdoExt(a1);
          v19 = (_DWORD *)&v41 + 3;
          v20 = 5LL;
          LODWORD(v45) = v18[1298];
          WORD2(v45) = *((_WORD *)v18 + 2598);
          HIWORD(v45) = v18[1300];
          v46 = v18[1307];
          *(_QWORD *)&v41 = (unsigned int)v18[637];
          v21 = (unsigned __int16 *)v18 + 2605;
          DWORD2(v41) = *((unsigned __int16 *)v18 + 2604);
          DWORD1(v41) = *((_WORD *)v18 + 2604) != 0;
          do
          {
            v22 = *v21;
            *v19 = v22;
            if ( v22 )
              ++DWORD1(v41);
            ++v19;
            ++v21;
            --v20;
          }
          while ( v20 );
          LODWORD(v37) = 4;
          v43 = v18[634];
          UsbhEtwWrite(
            &USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES,
            0LL,
            &v45,
            12LL,
            &v41,
            36LL,
            &v38,
            4LL,
            v5 + 4LL * v4,
            v37,
            0LL);
        }
        v23 = *((_QWORD *)v3 + 378);
        if ( v23 )
        {
          if ( (*(_DWORD *)(v5 + 4LL * v4) & 0x20) != 0 )
          {
            v24 = 28LL * v4;
            v41 = 0LL;
            v42 = 0LL;
            v38 = v4;
            LOBYTE(v44[0]) = *(_BYTE *)(v24 + v23);
            BYTE1(v44[0]) = *(_BYTE *)(v24 + *((_QWORD *)v3 + 378) + 1);
            *(_QWORD *)((char *)v44 + 2) = *(_QWORD *)(v24 + *((_QWORD *)v3 + 378) + 4);
            v47 = 0LL;
            v48 = 0;
            v43 = 0;
            if ( dword_1400706F0 )
            {
              v25 = FdoExt(a1);
              v26 = (_DWORD *)&v41 + 3;
              v27 = 5LL;
              LODWORD(v47) = v25[1298];
              WORD2(v47) = *((_WORD *)v25 + 2598);
              HIWORD(v47) = v25[1300];
              v48 = v25[1307];
              *(_QWORD *)&v41 = (unsigned int)v25[637];
              v28 = (unsigned __int16 *)v25 + 2605;
              DWORD2(v41) = *((unsigned __int16 *)v25 + 2604);
              DWORD1(v41) = *((_WORD *)v25 + 2604) != 0;
              do
              {
                v29 = *v28;
                *v26 = v29;
                if ( v29 )
                  ++DWORD1(v41);
                ++v26;
                ++v28;
                --v27;
              }
              while ( v27 );
              LODWORD(v37) = 10;
              v43 = v25[634];
              UsbhEtwWrite(
                &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE,
                0LL,
                &v47,
                12LL,
                &v41,
                36LL,
                &v38,
                4LL,
                v44,
                v37,
                0LL);
            }
          }
          if ( (*(_DWORD *)(v5 + 4LL * v4) & 0x40) != 0 )
          {
            v30 = *((_QWORD *)v3 + 378) + 12LL;
            v41 = 0LL;
            v42 = 0LL;
            v38 = v4;
            v31 = 28LL * v4 + v30;
            v49 = 0LL;
            v50 = 0;
            v43 = 0;
            if ( dword_1400706F0 )
            {
              v32 = FdoExt(a1);
              v33 = (_DWORD *)&v41 + 3;
              LODWORD(v49) = v32[1298];
              v34 = 5LL;
              WORD2(v49) = *((_WORD *)v32 + 2598);
              HIWORD(v49) = v32[1300];
              v50 = v32[1307];
              *(_QWORD *)&v41 = (unsigned int)v32[637];
              v35 = (unsigned __int16 *)v32 + 2605;
              DWORD2(v41) = *((unsigned __int16 *)v32 + 2604);
              DWORD1(v41) = *((_WORD *)v32 + 2604) != 0;
              do
              {
                v36 = *v35;
                *v33 = v36;
                if ( v36 )
                  ++DWORD1(v41);
                ++v33;
                ++v35;
                --v34;
              }
              while ( v34 );
              LODWORD(v37) = 16;
              v43 = v32[634];
              UsbhEtwWrite(
                &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
                0LL,
                &v49,
                12LL,
                &v41,
                36LL,
                &v38,
                4LL,
                v31,
                v37,
                0LL);
            }
          }
        }
        ++v4;
        result = FdoExt(a1);
      }
      while ( v4 <= *((unsigned __int8 *)result + 2938) );
    }
  }
  return result;
}
