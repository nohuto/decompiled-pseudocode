/*
 * XREFs of ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180005010
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18000522C (-IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18002EA80 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::SetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        const PROPVARIANT *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  char *i; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  HRESULT v11; // eax
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // rbx
  HRESULT v15; // eax
  HRESULT v16; // r14d
  GUID fmtid; // xmm0
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char *v22; // [rsp+80h] [rbp+40h] BYREF
  char *v23; // [rsp+98h] [rbp+58h] BYREF

  if ( CAudioSessionPropertyStore::IsValidProperty(this, (const struct tagPROPVARIANT *)a3) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v7 = (_QWORD *)((char *)this + 32);
    v23 = (char *)this + 48;
    for ( i = (char *)this + 32; ; i = (char *)(v9 + 48) )
    {
      v9 = *(_QWORD *)i;
      if ( !*(_QWORD *)i )
        break;
      if ( *(_DWORD *)(v9 + 16) == a2->pid )
      {
        v10 = *(_QWORD *)v9 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v9 == *(_QWORD *)&a2->fmtid.Data1 )
          v10 = *(_QWORD *)(v9 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v10 )
        {
          *(_OWORD *)pvarDest = 0LL;
          v20 = 0LL;
          v11 = PropVariantCopy(pvarDest, a3);
          v6 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F3,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v11,
              (int)pvarDest[0]);
LABEL_23:
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
            return v6;
          }
          PropVariantClear((PROPVARIANT *)(*(_QWORD *)i + 24LL));
          v12 = *(_QWORD *)i;
          *(_OWORD *)(v12 + 24) = *(_OWORD *)pvarDest;
          *(_QWORD *)(v12 + 40) = v20;
          goto LABEL_19;
        }
      }
    }
    v13 = (char *)operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v13;
    v14 = v13;
    if ( !v13 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x204,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL,
        (int)pvarDest[0]);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v22);
      goto LABEL_23;
    }
    *(_OWORD *)(v13 + 24) = 0LL;
    *((_QWORD *)v13 + 5) = 0LL;
    v15 = PropVariantCopy((PROPVARIANT *)v13 + 3, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v15,
        (int)pvarDest[0]);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v22);
      v6 = v16;
      goto LABEL_23;
    }
    while ( *v7 )
      v7 = (_QWORD *)(*v7 + 48LL);
    *((_QWORD *)v14 + 6) = 0LL;
    *((_DWORD *)v14 + 4) = a2->pid;
    fmtid = a2->fmtid;
    v22 = 0LL;
    *(GUID *)v14 = fmtid;
    *v7 = v14;
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v22);
LABEL_19:
    *((_BYTE *)this + 88) = 1;
    if ( this != (CAudioSessionPropertyStore *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    return 0LL;
  }
  else
  {
    v6 = -2147023266;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E5,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007065ELL,
      (int)pvarDest[0]);
    return v6;
  }
}
