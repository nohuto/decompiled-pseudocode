/*
 * XREFs of StorLogDLRMSetLinkToDesiredSpeed @ 0x14012E8D4
 * Callers:
 *     StorDlrmSetLinkToDesiredSpeed @ 0x14012E0A4 (StorDlrmSetLinkToDesiredSpeed.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer @ 0x14012D94C (McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogDLRMSetLinkToDesiredSpeed(
        __int64 a1,
        char a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        __int64 a6,
        char a7,
        int a8)
{
  __int64 v10; // rbx
  __int128 v11; // xmm0
  unsigned int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  unsigned __int16 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // edx
  unsigned __int16 *v21; // rax
  __int64 v22; // r8
  int v23; // [rsp+60h] [rbp-C0h]
  __int128 v24; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-60h] BYREF
  char v27; // [rsp+C8h] [rbp-58h]
  __int128 v28; // [rsp+D0h] [rbp-50h] BYREF
  int v29; // [rsp+E0h] [rbp-40h]
  char v30; // [rsp+E4h] [rbp-3Ch]
  __int128 v31; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v32; // [rsp+F8h] [rbp-28h]
  __int64 v33; // [rsp+108h] [rbp-18h]
  char v34; // [rsp+110h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 )
      {
        v29 = 0;
        v25 = 0LL;
        v30 = 0;
        v28 = 0LL;
        v33 = 0LL;
        v31 = 0LL;
        v34 = 0;
        v32 = 0LL;
        v26 = 0LL;
        v27 = 0;
        v11 = *(_OWORD *)(v10 + 5128);
        v24 = 0LL;
        v25 = v11;
        RaidDriverGetName(*(_QWORD *)(v10 + 16), (__int64)&v24);
        v13 = *(_QWORD *)(v10 + 6064);
        if ( v13 )
        {
          v31 = *(_OWORD *)(v13 + 24);
          v32 = *(_OWORD *)(v13 + 40);
          v33 = *(_QWORD *)(v13 + 56);
          v26 = *(_QWORD *)(*(_QWORD *)(v10 + 6064) + 64LL);
          v14 = *(_QWORD *)(v10 + 6064);
          v28 = *(_OWORD *)(v14 + 4);
          v29 = *(_DWORD *)(v14 + 20);
        }
        if ( a8 < 0 )
        {
          if ( (byte_140173448 & 8) != 0 )
          {
            v19 = *(_QWORD *)(v10 + 5024);
            if ( v19 )
              v20 = *(_DWORD *)(v19 + 16);
            else
              LOBYTE(v20) = v12;
            v21 = *(unsigned __int16 **)(v10 + 6064);
            if ( v21 )
            {
              LOWORD(v12) = v21[1];
              v22 = *v21;
            }
            else
            {
              v22 = v12;
            }
            McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer(
              a5,
              &EventDLRMSetLinkToDesiredSpeedFailure,
              v22,
              *(_DWORD *)(v10 + 56),
              (__int64)&v25,
              *((const wchar_t **)&v24 + 1),
              (const char *)&v28,
              v22,
              v12,
              (const char *)&v31,
              (const char *)&v26,
              a2,
              v23,
              a4,
              a5,
              a6,
              a7,
              a8,
              v20);
          }
        }
        else if ( (byte_140173448 & 0x10) != 0 )
        {
          v15 = *(_QWORD *)(v10 + 5024);
          if ( v15 )
            v16 = *(_DWORD *)(v15 + 16);
          else
            LOBYTE(v16) = v12;
          v17 = *(unsigned __int16 **)(v10 + 6064);
          if ( v17 )
          {
            LOWORD(v12) = v17[1];
            v18 = *v17;
          }
          else
          {
            v18 = v12;
          }
          McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer(
            a5,
            &EventDLRMSetLinkToDesiredSpeedSuccess,
            v18,
            *(_DWORD *)(v10 + 56),
            (__int64)&v25,
            *((const wchar_t **)&v24 + 1),
            (const char *)&v28,
            v18,
            v12,
            (const char *)&v31,
            (const char *)&v26,
            a2,
            v23,
            a4,
            a5,
            a6,
            a7,
            a8,
            v16);
        }
      }
    }
  }
}
