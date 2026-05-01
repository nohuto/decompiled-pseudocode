/*
 * XREFs of _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x18005AF98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___::Run @ 0x18005A660 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___--Run.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18005B8F0 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()(unsigned __int8 *a1)
{
  enum _TABLETMODESTATE *v2; // rdx
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // edx
  const wchar_t *v10; // rcx
  unsigned int i; // ebx
  __int64 v12; // rcx
  void *v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-59h] BYREF
  __int64 v15; // [rsp+38h] [rbp-51h] BYREF
  int v16; // [rsp+40h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-41h] BYREF
  int v18; // [rsp+50h] [rbp-39h] BYREF
  int v19; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  int *v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  int *v26; // [rsp+90h] [rbp+7h]
  __int64 v27; // [rsp+98h] [rbp+Fh]
  __int64 *v28; // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+A8h] [rbp+1Fh]

  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    &pv);
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v4 + 8);
      v16 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v16, v2);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        {
          LODWORD(v15) = v16;
          v19 = a1[8];
          v18 = *(_DWORD *)(v6 + v5);
          if ( pv )
          {
            v8 = -1LL;
            do
              ++v8;
            while ( *((_WORD *)pv + v8) );
            v9 = 2 * v8 + 2;
          }
          else
          {
            v9 = 10;
          }
          v10 = L"NULL";
          if ( pv )
            v10 = (const wchar_t *)pv;
          v21 = v10;
          v22 = v9;
          v23 = 0;
          v24 = &v18;
          v25 = 4LL;
          v26 = &v19;
          v27 = 4LL;
          v28 = &v15;
          v29 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &MICROSOFT_TWINUI_PUBLISHER_Context,
            &ImmersiveShell_AppManager_ApplicationStateChanged,
            v7,
            5LL,
            v20);
        }
      }
      v14 = 0;
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 32LL),
             &v14) >= 0 )
      {
        for ( i = 0; i < v14; ++i )
        {
          v15 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 32LL))(
                 *(_QWORD *)(*(_QWORD *)a1 + 32LL),
                 i,
                 &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060,
                 &v15) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
              v15,
              *(_QWORD *)(*(_QWORD *)a1 + 24LL),
              *(unsigned int *)(v6 + v5),
              *(_QWORD *)(v6 + v5 + 8));
          v12 = v15;
          if ( v15 )
          {
            v15 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
      ++v3;
      v5 += 16LL;
      v4 = *(_QWORD *)a1;
    }
    while ( v3 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) );
  }
  v13 = pv;
  pv = 0LL;
  CoTaskMemFree(v13);
}
