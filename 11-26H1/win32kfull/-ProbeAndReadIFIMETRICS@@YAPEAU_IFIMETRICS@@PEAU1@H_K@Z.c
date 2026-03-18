/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x140282D40
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x140283760 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x14020F71C (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

struct _IFIMETRICS *__fastcall ProbeAndReadIFIMETRICS(struct _IFIMETRICS *Src, int a2, unsigned __int64 a3)
{
  ULONG ULongFromUser; // edi
  struct _IFIMETRICS *v7; // rax
  struct _IFIMETRICS *v8; // rbx

  if ( a3 < 0xC0 )
    return 0LL;
  if ( a2 )
  {
    ProbeForRead(Src, 1uLL, 4u);
    ULongFromUser = RtlReadULongFromUser(Src);
  }
  else
  {
    ULongFromUser = Src->cjThis;
  }
  if ( a2 )
    ProbeForRead(Src, ULongFromUser, 4u);
  if ( ULongFromUser < 0xC0 )
    return 0LL;
  if ( ULongFromUser > a3 )
    return 0LL;
  if ( ULongFromUser > 0x2710000 )
    return 0LL;
  v7 = (struct _IFIMETRICS *)PALLOCMEM(ULongFromUser, 1886221639LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( a2 )
    RtlCopyFromUser(v7, Src, ULongFromUser);
  else
    RtlCopyVolatileMemory(v7, Src, ULongFromUser);
  if ( !IsValidIFIMETRICS(v8, ULongFromUser) )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  return v8;
}
