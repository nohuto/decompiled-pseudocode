/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002985C
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     GreOnCURSINFODestroy @ 0x140029974 (GreOnCURSINFODestroy.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1402183FC (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(void **a1)
{
  __int64 v2; // rdx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(a1[8]);
    *((_DWORD *)a1 + 14) = 0;
    a1[8] = 0LL;
  }
  if ( *((_WORD *)a1 + 36) )
  {
    UserDeleteAtom();
    *((_WORD *)a1 + 36) = 0;
  }
  if ( ((_DWORD)a1[10] & 8) != 0 )
  {
    DestroyAniIcon((struct tagACON *)a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v3 = a1[11];
    if ( v3 )
    {
      LOBYTE(v2) = 5;
      GreDereferenceObject(v3, v2, 0LL);
      GreDecQuotaCount(a1[3]);
      a1[11] = 0LL;
    }
    v4 = a1[12];
    if ( v4 )
    {
      LOBYTE(v2) = 5;
      GreDereferenceObject(v4, v2, 0LL);
      GreDecQuotaCount(a1[3]);
      a1[12] = 0LL;
    }
    v5 = a1[16];
    if ( v5 )
    {
      GreDeleteObject(v5);
      GreDecQuotaCount(a1[3]);
      a1[16] = 0LL;
    }
    v6 = a1[13];
    if ( v6 )
    {
      GreDeleteObject(v6);
      a1[13] = 0LL;
    }
  }
}
