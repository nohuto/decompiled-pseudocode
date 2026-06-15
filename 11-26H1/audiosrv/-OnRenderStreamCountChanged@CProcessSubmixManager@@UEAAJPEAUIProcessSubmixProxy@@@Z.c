/*
 * XREFs of ?OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180063D30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x180086D98 (_lambda_4353f9e11044a5b317e93e9c877fb0e4_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::OnRenderStreamCountChanged(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  __int64 v3; // rax
  LPCWCH **i; // rbx
  LPCWCH *v6; // rsi
  const WCHAR *v7; // rax
  int v8; // edi
  bool v9; // zf
  int v10; // edi
  unsigned int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IProcessSubmixProxy *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  v16 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 144LL))(a2) )
    return 0LL;
  v3 = *(_QWORD *)v16;
  v17 = 0LL;
  (*(void (__fastcall **)(struct IProcessSubmixProxy *, __int64 *))(v3 + 64))(v16, &v17);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 264LL))(v17) )
    goto LABEL_7;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v15[0] = &v16;
  v15[1] = this;
  for ( i = (LPCWCH **)*((_QWORD *)this + 7); i != *((LPCWCH ***)this + 8); ++i )
  {
    v6 = *i;
    switch ( *((_DWORD *)*i + 3) )
    {
      case 1:
        v13 = *((_DWORD *)v6 + 4);
        if ( v13 == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 200LL))(v16) )
        {
          if ( *((_DWORD *)v6 + 2) )
          {
            v14 = *((_DWORD *)*i + 2);
            if ( v14 == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 128LL))(v16) )
              goto LABEL_28;
          }
        }
        break;
      case 2:
        v12 = *((_DWORD *)v6 + 4);
        if ( v12 == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 200LL))(v16)
          && (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v16 + 136LL))(
               v16,
               *((unsigned int *)v6 + 2)) )
        {
          goto LABEL_28;
        }
        break;
      case 3:
        v10 = *((_DWORD *)v6 + 4);
        if ( v10 == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 200LL))(v16) )
        {
          v11 = *((_DWORD *)v6 + 2);
          if ( v11 != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 128LL))(v16) )
          {
            v9 = (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v16 + 136LL))(
                   v16,
                   v11) == 0;
LABEL_20:
            if ( !v9 )
              continue;
LABEL_28:
            lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
              v15,
              i);
            continue;
          }
        }
        break;
      case 4:
        v7 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 192LL))(v16);
        if ( CompareStringOrdinal(**i, -1, v7, -1, 1) == 2 )
        {
          v8 = *((_DWORD *)*i + 4);
          v9 = v8 == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 200LL))(v16);
          goto LABEL_20;
        }
        break;
    }
  }
  if ( this != (CProcessSubmixManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
LABEL_7:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
