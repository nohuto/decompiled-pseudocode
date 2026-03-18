/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400E45E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdi
  PVOID v6; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int i; // edi
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    --*(_DWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
    if ( !*(_DWORD *)(v3 + 8) )
    {
      GreDeleteFastMutex((char *)v3);
      if ( v5 )
      {
        Buffer[0] = v5;
        Buffer[1] = 0LL;
        v6 = RtlLookupElementGenericTable(a2 + 4, Buffer);
        if ( v6 )
          RtlDeleteElementGenericTable(a2 + 4, v6);
        *(_DWORD *)(v5 + 16) &= ~4u;
      }
    }
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 29); ++i )
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8LL * i));
    GreDeleteFastMutex(*((char **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    for ( j = 0; j < *((_DWORD *)this + 59); ++j )
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 18) + 8LL * j));
    GreDeleteFastMutex(*((char **)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    *(_QWORD *)((char *)this + 236) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a2, v7);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 58) = 0;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a2, v8);
    *((_QWORD *)this + 20) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a2, v9);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    for ( k = 0; k < *((_DWORD *)this + 61); ++k )
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 19) + 16LL * k));
    GreDeleteFastMutex(*((char **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
  }
}
