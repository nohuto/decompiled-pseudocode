/*
 * XREFs of ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14015F560
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memcpy_s @ 0x1401A4D88 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetBufferProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount)
{
  unsigned int v5; // ebx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  char *v10; // rcx
  void *v11; // rcx

  v5 = 0;
  if ( a3 == 9 && (a4 || !MaxCount) )
  {
    v8 = MaxCount >> 2;
    if ( (unsigned int)(MaxCount >> 2) > *((_DWORD *)this + 24) )
    {
      v9 = Win32AllocPoolWithQuotaImpl((__int64)this, MaxCount, 0x64734344u);
      if ( !v9 )
        return (unsigned int)-1073741801;
      v10 = (char *)*((_QWORD *)this + 11);
      if ( v10 )
        GreDeleteFastMutex(v10);
      *((_QWORD *)this + 11) = v9;
    }
    v11 = (void *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 12) = (unsigned int)v8;
    memcpy_s(v11, 4LL * (unsigned int)v8, a4, MaxCount);
    *((_DWORD *)this + 4) |= 0x400u;
    return v5;
  }
  return (unsigned int)-1073741811;
}
