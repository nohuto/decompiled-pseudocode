/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x14060C084
 * Callers:
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x1407E8650 (PopSqmThermalZoneEnumeration.c)
 */

_UNKNOWN **__fastcall PopDiagTraceThermalZoneEnumeration(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int16 *v3; // r13
  void *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  unsigned int *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  ULONG v19; // edx
  __int64 v20; // rcx
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v26; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-68h]
  int v32; // [rsp+A4h] [rbp-64h]
  unsigned int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int64 v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  _DWORD v41[10]; // [rsp+208h] [rbp+100h] BYREF
  _UNKNOWN *retaddr; // [rsp+260h] [rbp+158h] BYREF

  result = &retaddr;
  v27 = 0;
  LOWORD(v25) = 0;
  LOWORD(v24) = 0;
  v28 = 0;
  v26 = 0;
  if ( PopDiagHandleRegistered )
  {
    v3 = (unsigned __int16 *)(a1 + 1040);
    result = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
    v4 = result;
    if ( result )
    {
      v5 = *((_QWORD *)result[39] + 5);
      if ( v5 )
      {
        v6 = v5 + 128;
        LOWORD(v24) = *(_WORD *)(v5 + 128) >> 1;
        v28 = *(_DWORD *)(a1 + 132) / 0xAu;
        v27 = *(_DWORD *)(a1 + 140) / 0xAu;
        v26 = *(_DWORD *)(a1 + 188) / 0xAu;
        v7 = *(_DWORD *)(a1 + 136) / 0xAu;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v24;
          v8 = 6;
          v30 = *(_QWORD *)(v6 + 8);
          v9 = v41;
          v10 = 0;
          v32 = 0;
          v31 = 2 * (unsigned __int16)v24;
          v33 = &v28;
          v35 = a1 + 116;
          v37 = a1 + 120;
          v39 = a1 + 124;
          v34 = 4LL;
          v36 = 4LL;
          v38 = 4LL;
          v40 = 4LL;
          do
          {
            v11 = v10++;
            *v9 = *(unsigned int *)((char *)v9 + a1 + 112 - (_QWORD)v41 + 36) / 0xA;
            v12 = v8++;
            v12 *= 2LL;
            *(&UserData.Ptr + v12) = (ULONGLONG)&v41[v11];
            *((_QWORD *)&UserData.Size + v12) = 4LL;
            ++v9;
          }
          while ( v10 < 0xA );
          v13 = 2LL * v8;
          *(&UserData.Ptr + v13) = (ULONGLONG)&v27;
          *((_QWORD *)&UserData.Size + v13) = 4LL;
          v14 = v8 + 1;
          v15 = v8 + 2;
          v14 *= 2LL;
          *(&UserData.Ptr + v14) = (ULONGLONG)&v26;
          *((_QWORD *)&UserData.Size + v14) = 4LL;
          v16 = 2LL * v15;
          *(&UserData.Ptr + v16) = a1 + 192;
          *((_QWORD *)&UserData.Size + v16) = 4LL;
          v17 = v15 + 1;
          v15 += 2;
          v17 *= 2LL;
          v18 = 2LL * v15++;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          *(&UserData.Ptr + v17) = a1 + 136;
          *(&UserData.Ptr + v18) = a1 + 196;
          *((_QWORD *)&UserData.Size + v18) = 4LL;
          v19 = *v3;
          v20 = 2LL * v15;
          LOWORD(v25) = *v3 >> 1;
          ++v15;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v25;
          v21 = *((_QWORD *)v3 + 1);
          *((_QWORD *)&UserData.Size + v20) = 2LL;
          v22 = 2LL * v15;
          *(&UserData.Ptr + v22) = v21;
          *(&UserData.Size + 2 * v22) = v19;
          *(&UserData.Reserved + 2 * v22) = 0;
          v23 = 2LL * (v15 + 1);
          *(&UserData.Ptr + v23) = a1 + 200;
          *((_QWORD *)&UserData.Size + v23) = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
        }
        PopSqmThermalZoneEnumeration(
          v6,
          (_DWORD)v3,
          v28,
          *(_DWORD *)(a1 + 116),
          *(_DWORD *)(a1 + 120),
          *(_DWORD *)(a1 + 124),
          *(_DWORD *)(a1 + 148) / 0xAu,
          *(_DWORD *)(a1 + 152) / 0xAu,
          v27,
          v26,
          v7,
          *(_DWORD *)(a1 + 200));
        *(_BYTE *)(a1 + 65) |= 0x10u;
      }
      return (_UNKNOWN **)ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    }
  }
  return result;
}
