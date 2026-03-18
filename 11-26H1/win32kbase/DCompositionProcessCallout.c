/*
 * XREFs of DCompositionProcessCallout @ 0x14010F050
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x14010F098 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x14010F0C0 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall DCompositionProcessCallout(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx

  v2 = 0;
  if ( a2 )
  {
    return (unsigned int)DirectComposition::CProcessData::OnProcessCreation((struct _W32PROCESS *)a1);
  }
  else
  {
    v4 = *(void **)(a1 + 256);
    if ( v4 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v4, a2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
  }
  return v2;
}
