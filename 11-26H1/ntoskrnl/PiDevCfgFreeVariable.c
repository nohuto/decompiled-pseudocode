/*
 * XREFs of PiDevCfgFreeVariable @ 0x140988298
 * Callers:
 *     PiDevCfgFreeResolveContext @ 0x140988CE4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140A2D8F8 (_PnpCtxRegDeleteTree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeVariable(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx
  int v3; // edx

  RtlFreeAnsiString(P + 1);
  Buffer = P[2].Buffer;
  if ( Buffer )
  {
    v3 = *(_DWORD *)&P[2].Length;
    if ( (_WORD)v3 == 0x8000 )
    {
      if ( (v3 & 0x100000) != 0 )
        PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, P[2].Buffer, 0LL);
      ZwClose(P[2].Buffer);
    }
    else
    {
      ExFreePoolWithTag(Buffer, 0);
    }
  }
  ExFreePoolWithTag(P, 0);
}
