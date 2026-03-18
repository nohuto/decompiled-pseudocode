/*
 * XREFs of ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140056890
 * Callers:
 *     VfAddContextToHandle @ 0x1400E30D0 (VfAddContextToHandle.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxContextHeaderInit(FxContextHeader *Header, FxObject *Object, _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8

  Header->NextHeader = 0LL;
  Header->EvtCleanupCallback = 0LL;
  Header->EvtDestroyCallback = 0LL;
  Header->ContextTypeInfo = 0LL;
  *((_QWORD *)&Header->ContextTypeInfo + 1) = 0LL;
  Header->Object = Object;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(Header->Context, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    Header->ContextTypeInfo = Attributes->ContextTypeInfo;
  }
}
