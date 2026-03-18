/*
 * XREFs of ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1404836B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall SmpStoreMgrCallback(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2, int a3)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v7; // rcx

  v3 = 0;
  if ( (unsigned int)(a3 - 7) <= 1 )
  {
    v7 = a1 + 278;
    if ( a3 == 7 )
    {
      if ( ExAcquireRundownProtection_0(v7) )
      {
        if ( a2 )
          *a2 = a1[276].Count;
      }
      else
      {
        return (unsigned int)-1073740640;
      }
    }
    else
    {
      ExReleaseRundownProtection_0(v7);
    }
  }
  return v3;
}
