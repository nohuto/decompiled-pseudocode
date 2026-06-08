/*
 * XREFs of C3IdleCheck @ 0x140009D20
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1400016C8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140001D90 (ReadGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_140019144);
  v2 = 0;
  if ( qword_140019154 )
    v2 = ReadGenAddr((unsigned __int8 *)&dword_140019150);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_140019144, 16LL);
    if ( qword_140019154 )
      WriteGenAddr(&dword_140019150, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
