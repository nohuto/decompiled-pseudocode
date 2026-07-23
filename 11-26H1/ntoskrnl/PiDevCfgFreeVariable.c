/*
 * XREFs of PiDevCfgFreeVariable @ 0x140A429C4
 * Callers:
 *     PiDevCfgFreeResolveContext @ 0x140A43410 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeVariable(PVOID P)
{
  void *v2; // rcx
  int v3; // edx

  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
  {
    v3 = *((_DWORD *)P + 8);
    if ( (_WORD)v3 == 0x8000 )
    {
      if ( (v3 & 0x100000) != 0 )
        PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, *((_QWORD *)P + 5), 0LL);
      ZwClose(*((HANDLE *)P + 5));
    }
    else
    {
      ExFreePoolWithTag(v2, 0);
    }
  }
  ExFreePoolWithTag(P, 0);
}
