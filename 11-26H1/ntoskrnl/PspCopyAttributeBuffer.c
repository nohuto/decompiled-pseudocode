/*
 * XREFs of PspCopyAttributeBuffer @ 0x140B02B6C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall PspCopyAttributeBuffer(char *a1, volatile void *a2, size_t a3, char a4)
{
  if ( a4 )
  {
    switch ( a3 )
    {
      case 1uLL:
        *a1 = RtlReadUCharFromUser(a2);
        break;
      case 2uLL:
        *(_WORD *)a1 = RtlReadUShortFromUser((unsigned __int16 *)a2);
        break;
      case 4uLL:
        *(_DWORD *)a1 = RtlReadULongFromUser((unsigned int *)a2);
        break;
      case 8uLL:
        *(_QWORD *)a1 = RtlReadULong64FromUser(a2);
        break;
      default:
        RtlCopyFromUser(a1, (void *)a2, a3);
        break;
    }
  }
  else
  {
    memmove(a1, (const void *)a2, a3);
  }
  return 0LL;
}
