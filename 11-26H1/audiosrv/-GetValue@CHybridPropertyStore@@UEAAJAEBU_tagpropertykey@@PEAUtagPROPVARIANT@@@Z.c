/*
 * XREFs of ?GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18006E200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHybridPropertyStore::GetValue(
        CHybridPropertyStore *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // edi
  __int64 i; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *(_OWORD *)&a3->vt = 0LL;
  a3->bstrblobVal.pData = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 3)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v7 < 0 || !a3->vt )
  {
    for ( i = *((_QWORD *)this + 4); ; i = v10 + 20 )
    {
      if ( i == *((_QWORD *)this + 5) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 2) + 40LL))(
               *((_QWORD *)this + 2),
               a2,
               a3);
        goto LABEL_5;
      }
      if ( (unsigned int)operator==(i, (__int64)a2) )
        break;
    }
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
        (const char *)(unsigned int)v7);
  }
LABEL_5:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
