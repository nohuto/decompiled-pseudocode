/*
 * XREFs of ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18005FB2C
 * Callers:
 *     ?SetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x18005FB00 (-SetTabTearOutSupportedForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SetTabTearOutSupportedForWindow(
        RTL_SRWLOCK *this,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *Ptr; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned __int64 i; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h]

  v18 = a2;
  v4 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  v5 = 0xCBF29CE484222325uLL;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0LL;
  v8 = 0x100000001B3LL;
  do
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + v7++) ^ (unsigned __int64)v6);
  while ( v7 < 8 );
  v9 = 2 * (v6 & (__int64)this[84].Ptr);
  Ptr = this[81].Ptr;
  v11 = (_QWORD *)Ptr[v9 + 1];
  if ( v11 == this[79].Ptr )
  {
LABEL_8:
    v11 = 0LL;
  }
  else
  {
    v12 = (_QWORD *)Ptr[v9];
    while ( a2 != v11[2] )
    {
      if ( v11 == v12 )
        goto LABEL_8;
      v11 = (_QWORD *)v11[1];
    }
  }
  try
  {
    if ( !v11 || v11 == this[79].Ptr || !BYTE1(this[109].Ptr) )
      goto LABEL_19;
    for ( i = 0LL; i < 8; ++i )
      v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + i) ^ (unsigned __int64)v5);
    v14 = this[81].Ptr;
    v15 = v14[2 * (v5 & (__int64)this[84].Ptr) + 1];
    if ( (PVOID)v15 == this[79].Ptr )
      goto LABEL_22;
    v16 = v14[2 * (v5 & (__int64)this[84].Ptr)];
    while ( 1 )
    {
      if ( a2 == *(_QWORD *)(v15 + 16) )
      {
        if ( v15 )
        {
          LOBYTE(v16) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
            v16);
          *(_BYTE *)(v15 + 232) = 1;
LABEL_19:
          if ( v4 )
            ReleaseSRWLockExclusive(v4);
          return;
        }
      }
      else if ( v15 != v16 )
      {
        goto LABEL_23;
      }
LABEL_22:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
LABEL_23:
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE3,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)v8);
  }
}
