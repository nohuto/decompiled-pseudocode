/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402407E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401C11D0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  unsigned int i; // esi

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(this, a2, a3, a4);
  LOBYTE(v6) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CKeyframeAnimationMarshaler *)((char *)this + 152),
    (struct DirectComposition::CApplicationChannel *)a2,
    v6,
    v7);
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_DWORD *)this + 66) = 0;
  }
  v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 23);
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
    *((_QWORD *)this + 23) = 0LL;
  }
  v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 24);
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    *((_QWORD *)this + 24) = 0LL;
  }
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v13 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( *((_QWORD *)this + 22) )
  {
    for ( i = 0; i < *((_DWORD *)this + 67); ++i )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 22) + 16LL * i));
    GreDeleteFastMutex(*((char **)this + 22), (__int64)v13, v8, v9);
    *((_QWORD *)this + 22) = 0LL;
    *(_QWORD *)((char *)this + 268) = 0LL;
  }
}
