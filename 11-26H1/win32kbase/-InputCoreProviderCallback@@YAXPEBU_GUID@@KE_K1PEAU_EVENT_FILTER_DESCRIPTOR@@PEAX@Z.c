/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14019FA10
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401AB058 (W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
    W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(a1);
}
