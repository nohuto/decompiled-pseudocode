/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140138C80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140138E6C (-FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401C11D0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        char **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdi
  __int64 i; // rbp
  char *v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v7 = this + 23;
  if ( this[22] )
  {
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *(struct DirectComposition::CWeakReferenceBase **)&this[22][8 * i]);
    GreDeleteFastMutex(this[22], v4, v5, v6);
    this[22] = 0LL;
  }
  v9 = this[24];
  *v7 = 0;
  *((_DWORD *)this + 47) = 0;
  if ( v9 )
  {
    GreDeleteFastMutex(v9, v4, v5, v6);
    this[24] = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)this[17];
  this[25] = 0LL;
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((struct _RTL_GENERIC_TABLE *)a2, v10);
    this[17] = 0LL;
  }
  DirectComposition::CExpressionMarshaler::FreePersistentCache((DirectComposition::CExpressionMarshaler *)this, a2);
}
