/*
 * XREFs of HalpQueryDebuggerInformation @ 0x140C188B0
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryDebuggerInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  struct _KTHREAD *v4; // rdi
  int v7; // esi
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v9; // r8
  int Blink_high; // eax
  char *v11; // rcx
  unsigned int v12; // r10d
  int v13; // r9d
  const wchar_t *Flink; // r8

  *a3 = 4;
  v4 = *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40];
  v7 = 0;
  while ( v4 != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40] )
  {
    Blink = v4->Header.WaitListHead.Blink;
    v9 = *a3;
    Blink_high = HIDWORD(Blink[13].Blink);
    v11 = (char *)a1 + v9;
    if ( Blink_high )
    {
      if ( Blink_high != 1 )
        return 3221225473LL;
      v12 = LODWORD(Blink[14].Blink) + 2;
      v13 = LODWORD(Blink[14].Blink) + 22;
      *a3 = v13 + v9;
      if ( v13 + (int)v9 <= a2 )
      {
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 1) = v13;
        *((_DWORD *)v11 + 2) = Blink[14].Blink;
        if ( LODWORD(Blink[14].Blink) )
        {
          Flink = (const wchar_t *)Blink[14].Flink;
          if ( Flink )
            wcscpy_s((wchar_t *)v11 + 6, (unsigned __int64)v12 >> 1, Flink);
        }
      }
    }
    else
    {
      *a3 = v9 + 20;
      if ( (int)v9 + 20 <= a2 )
      {
        *(_DWORD *)v11 = 0;
        *((_DWORD *)v11 + 1) = 20;
        *((_DWORD *)v11 + 3) = Blink->Flink;
        *((_DWORD *)v11 + 4) = HIDWORD(Blink->Flink);
        *((_WORD *)v11 + 4) = Blink->Blink;
      }
    }
    v4 = *(struct _KTHREAD **)&v4->Header.Lock;
    ++v7;
  }
  if ( !v7 )
    return 3221225473LL;
  if ( *a3 > a2 )
    return 2147483653LL;
  *a1 = *(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[32];
  return 0LL;
}
