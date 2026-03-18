/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140198900
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400EC620 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1400F20EC (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1402368F0 (-FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        char **this,
        struct _RTL_GENERIC_TABLE *a2)
{
  _DWORD *v4; // rdi
  __int64 i; // rbp
  char *v6; // rcx
  struct DirectComposition::CResourceMarshaler *v7; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this + 22;
  if ( this[21] )
  {
    for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *(struct DirectComposition::CWeakReferenceBase **)&this[21][8 * i]);
    GreDeleteFastMutex(this[21]);
    this[21] = 0LL;
  }
  *v4 = 0;
  *((_DWORD *)this + 45) = 0;
  v6 = this[23];
  if ( v6 )
  {
    GreDeleteFastMutex(v6);
    this[23] = 0LL;
  }
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  v7 = (struct DirectComposition::CResourceMarshaler *)this[16];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a2, v7);
    this[16] = 0LL;
  }
  DirectComposition::CExpressionMarshaler::FreePersistentCache(
    (DirectComposition::CExpressionMarshaler *)this,
    (struct DirectComposition::CApplicationChannel *)a2);
}
