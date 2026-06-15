/*
 * XREFs of ?GetAt@CHybridPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x18014E880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHybridPropertyStore::GetAt(CHybridPropertyStore *this, unsigned int a2, struct _tagpropertykey *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v11; // rcx
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = *((_QWORD *)this + 2);
  v14 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( a2 >= v14 )
    {
      v11 = *((_QWORD *)this + 3);
      a2 -= v14;
    }
    else
    {
      v11 = *((_QWORD *)this + 2);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _tagpropertykey *))(*(_QWORD *)v11 + 32LL))(v11, a2, a3);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v9;
  }
}
