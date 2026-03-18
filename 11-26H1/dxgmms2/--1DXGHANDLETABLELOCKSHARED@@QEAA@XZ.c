/*
 * XREFs of ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1400375B0
 * Callers:
 *     ?VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z @ 0x1400A2820 (-VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED(DXGHANDLETABLELOCKSHARED *this)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    v2 = *((_QWORD *)this + 1);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 16));
    ExReleasePushLockSharedEx(v2, 0LL);
LABEL_3:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    v3 = *((_QWORD *)this + 1);
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    goto LABEL_3;
  }
}
