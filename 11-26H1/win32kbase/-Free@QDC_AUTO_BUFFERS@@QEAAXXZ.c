/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x14007D640
 * Callers:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D358 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 55);
  if ( v5 )
  {
    if ( v5 != (char *)this )
    {
      GreDeleteFastMutex(v5, a2, a3, a4);
      *((_QWORD *)this + 55) = 0LL;
    }
  }
}
