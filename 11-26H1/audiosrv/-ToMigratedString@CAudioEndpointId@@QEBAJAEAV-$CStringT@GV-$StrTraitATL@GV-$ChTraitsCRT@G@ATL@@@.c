/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18008C820
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180029304 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioEndpointId::ToMigratedString(_QWORD *a1, __int64 *a2)
{
  int *v4; // rax
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rbx
  int v7; // esi
  int v8; // r13d
  __int64 v9; // rcx
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int16 i; // ax
  __int16 v14; // r12
  __int64 v15; // r15
  int v16; // edi
  __int64 v17; // rcx
  LPVOID pv; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+38h] [rbp-81h] BYREF
  __int64 v21; // [rsp+40h] [rbp-79h] BYREF
  int v22; // [rsp+48h] [rbp-71h] BYREF
  int v23; // [rsp+4Ch] [rbp-6Dh] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  __int64 v26; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v27[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v28; // [rsp+70h] [rbp-49h]
  unsigned __int16 *v29; // [rsp+80h] [rbp-39h] BYREF
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  void *v32; // [rsp+90h] [rbp-29h]
  int v33; // [rsp+98h] [rbp-21h]
  int v34; // [rsp+9Ch] [rbp-1Dh]
  const char *v35; // [rsp+A0h] [rbp-19h]
  __int64 v36; // [rsp+A8h] [rbp-11h]
  _DWORD *v37; // [rsp+B0h] [rbp-9h]
  __int64 v38; // [rsp+B8h] [rbp-1h]
  int *v39; // [rsp+C0h] [rbp+7h]
  __int64 v40; // [rsp+C8h] [rbp+Fh]

  v4 = (int *)*a2;
  v5 = (volatile signed __int32 *)(*a2 - 24);
  v6 = *(_QWORD *)v5;
  v7 = 0;
  if ( *((_DWORD *)v5 + 2) )
  {
    if ( *((int *)v5 + 4) >= 0 )
    {
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
      *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) + 24;
    }
    else
    {
      if ( *(v4 - 3) < 0 )
        ATL::AtlThrowImpl(-2147024809);
      *(v4 - 4) = 0;
      *(_WORD *)*a2 = 0;
    }
  }
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v26 = 0LL;
  v25 = 0LL;
  pv = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *a1,
         &v21);
  if ( v8 < 0 )
    goto LABEL_44;
  v9 = v20;
  if ( v20 != v21 && v21 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v21)(v21, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v20);
    v9 = v20;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v22);
  if ( v8 < 0
    || (v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v21 + 24LL))(
               v21,
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL,
               0LL,
               &v26),
        v8 < 0)
    || (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 32LL))(v26, 0LL, &v25), v8 < 0)
    || (v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v25 + 72LL))(v25, &pv), v8 < 0) )
  {
LABEL_44:
    v10 = (unsigned __int16 *)pv;
  }
  else
  {
    v10 = (unsigned __int16 *)pv;
    v11 = *(unsigned __int16 *)pv;
    if ( (_WORD)v11 )
    {
      do
      {
        v12 = v7 + 1;
        if ( (_WORD)v11 != 35 )
          v12 = v7;
        v7 = v12;
        if ( v12 == 2 )
        {
          for ( i = *++v10; *v10 != 35; i = *v10 )
          {
            if ( !i )
              break;
            ++v10;
          }
          v7 = 3;
          v11 = *v10;
        }
        v14 = _o_towlower(v11);
        v15 = *(unsigned int *)(*a2 - 16);
        v16 = v15 + 1;
        if ( (int)((*(_DWORD *)(*a2 - 12) - (v15 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, v16);
        *(_WORD *)(*a2 + 2 * v15) = v14;
        if ( v16 < 0 || v16 > *(_DWORD *)(*a2 - 12) )
          ATL::AtlThrowImpl(-2147024809);
        *(_DWORD *)(*a2 - 16) = v16;
        *(_WORD *)(*a2 + 2LL * v16) = 0;
        v11 = *++v10;
      }
      while ( (_WORD)v11 );
      v10 = (unsigned __int16 *)pv;
    }
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  if ( v8 < 0 )
  {
    v17 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v17 > 4u )
    {
      v23 = v8;
      v24[0] = 250;
      v39 = &v23;
      v40 = 4LL;
      v37 = v24;
      v38 = 4LL;
      v35 = "CAudioEndpointId::ToMigratedString";
      v36 = 35LL;
      v27[0] = 184549376;
      v27[1] = 4;
      v28 = 0LL;
      v29 = *(unsigned __int16 **)(v17 + 8);
      v30 = *v29;
      v31 = 2;
      v32 = &unk_1801A4F1B;
      v33 = 35;
      v34 = 1;
      v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v17 + 32), v27, 0LL, 0LL, 5, &v29, pv);
    }
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)v8;
}
