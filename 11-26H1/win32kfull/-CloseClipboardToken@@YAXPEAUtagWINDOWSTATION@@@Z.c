/*
 * XREFs of ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B1920
 * Callers:
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     ForceEmptyClipboard @ 0x1401B18B0 (ForceEmptyClipboard.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseClipboardToken(struct tagWINDOWSTATION *a1)
{
  void *v2; // rcx
  int v3; // eax

  v2 = (void *)*((_QWORD *)a1 + 16);
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 8);
    if ( (v3 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 8) = v3 & 0xFFFFFBFF;
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    else
    {
      ObfDereferenceObject(v2);
    }
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
