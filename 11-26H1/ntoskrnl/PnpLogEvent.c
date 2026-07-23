/*
 * XREFs of PnpLogEvent @ 0x140A37B48
 * Callers:
 *     PpBootDDBHelper @ 0x1407A8694 (PpBootDDBHelper.c)
 *     PnpQueryID @ 0x1409B1418 (PnpQueryID.c)
 *     PnpFixupID @ 0x1409B1598 (PnpFixupID.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 *     PnpLogDuplicateDevice @ 0x140A37A98 (PnpLogDuplicateDevice.c)
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 *     PpCheckInDriverDatabase @ 0x140A391E4 (PpCheckInDriverDatabase.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1404DF340 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1405CD638 (IoAllocateGenericErrorLogEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall PnpLogEvent(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 GenericErrorLogEntry; // rax
  _WORD *v14; // rbx
  char *v15; // rbp
  __int64 v16; // rcx

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = v10 + v11 + v9;
  if ( v12 <= 0xF0 )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v12);
    v14 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_DWORD *)(GenericErrorLogEntry + 12) = a3;
      *(_DWORD *)(GenericErrorLogEntry + 20) = a3;
      v15 = (char *)(GenericErrorLogEntry + v11);
      *(_WORD *)(GenericErrorLogEntry + 2) = Size;
      *(_WORD *)(GenericErrorLogEntry + 6) = v11;
      if ( Size )
        memmove((void *)(GenericErrorLogEntry + 40), a4, Size);
      if ( a1 )
      {
        v14[2] = 1;
        memmove(v15, a1[1], *(unsigned __int16 *)a1);
        v16 = *(unsigned __int16 *)a1;
        *(_WORD *)&v15[v16] = 0;
        v15 += v16 + 2;
      }
      if ( a2 )
      {
        ++v14[2];
        memmove(v15, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v15[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v14);
    }
  }
}
