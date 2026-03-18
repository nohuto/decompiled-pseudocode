/*
 * XREFs of ??1CFSVPProvider@@QEAA@XZ @ 0x18021BBB4
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A3EFC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x180245E38 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1801DF790 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 */

void __fastcall CFSVPProvider::~CFSVPProvider(CFSVPProvider *this)
{
  struct _TP_WORK *v2; // rcx
  struct _TP_WORK *v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 3);
  if ( v2 )
    WaitForThreadpoolWorkCallbacks(v2, 1);
  v3 = (struct _TP_WORK *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CloseThreadpoolWork(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  CFSVPProvider::ReleaseWNFHandles(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
