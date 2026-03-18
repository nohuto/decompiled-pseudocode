/*
 * XREFs of ?AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x140165010
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x140016910 (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall AllocateObject(struct Gre::Base::SESSION_GLOBALS *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  BOOL v5; // edi
  size_t v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v10; // rax

  v4 = *((_DWORD *)a1 + 468);
  v5 = v4 && a3 == v4;
  v6 = a2 + 160;
  if ( !v5 )
    v6 = a2;
  if ( *((_DWORD *)a1 + a3 + 532) >= (unsigned int)v6 )
  {
    v10 = Win32AllocateFromPagedLookasideListImpl(*((char **)a1 + a3 + 235));
    v8 = (__int64)v10;
    if ( !v10 )
      goto LABEL_7;
    memset(v10, 0, v6);
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v6 + v8 - 160), 0LL);
    *(_WORD *)(v8 + 14) = 128;
  }
  else
  {
    v7 = PALLOCMEM((unsigned int)v6, (a3 << 24) + 808478791, a3 << 24, a4);
    v8 = v7;
    if ( !v7 )
    {
LABEL_7:
      EngSetLastError(8u);
      return 0LL;
    }
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v7 - 160 + (unsigned int)v6), 0LL);
  }
  return v8;
}
