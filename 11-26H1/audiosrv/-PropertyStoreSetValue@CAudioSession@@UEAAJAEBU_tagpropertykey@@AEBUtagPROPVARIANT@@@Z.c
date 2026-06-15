/*
 * XREFs of ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180063C30
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     WPP_SF_qS @ 0x1800CFD64 (WPP_SF_qS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreSetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      87,
      (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      (_DWORD)this,
      0LL);
  }
  v6 = &AllowedSessionPropertyKeys;
  do
  {
    if ( (unsigned int)operator==(a2, v6) )
      break;
    ++v8;
    v6 = (void *)(v7 + 20);
  }
  while ( (unsigned __int64)(v9 + 20) < 0x28 );
  if ( v8 == 2 )
    return 2147942487LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 52) + 48LL))(
             *((_QWORD *)this + 52),
             a2,
             a3);
}
