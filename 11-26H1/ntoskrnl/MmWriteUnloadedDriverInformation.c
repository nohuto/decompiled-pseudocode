/*
 * XREFs of MmWriteUnloadedDriverInformation @ 0x1406FBA8C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MmWriteUnloadedDriverInformation(unsigned int *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned int v6; // edx
  _QWORD *v7; // r10
  unsigned __int16 v8; // ax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( MmUnloadedDrivers )
  {
    v3 = a1 + 2;
    v4 = 0;
    v5 = (unsigned int)(MmLastUnloadedDriver - 1);
    v6 = 0;
    do
    {
      v7 = MmUnloadedDrivers;
      result = 49LL;
      if ( (unsigned int)v5 >= 0x32 )
        v5 = 49LL;
      *(_OWORD *)v3 = *(_OWORD *)((char *)MmUnloadedDrivers + 40 * v5);
      if ( !v7[5 * v5 + 1] )
        break;
      *((_QWORD *)v3 + 5) = v7[5 * v5 + 2];
      *((_QWORD *)v3 + 6) = v7[5 * v5 + 3];
      if ( *(_WORD *)v3 > 0x18u )
        *(_WORD *)v3 = 24;
      v8 = *((_WORD *)v3 + 1);
      if ( v8 > 0x18u )
      {
        *((_WORD *)v3 + 1) = 24;
        v8 = 24;
      }
      *((_QWORD *)v3 + 1) = v3 + 4;
      result = (__int64)memmove(v3 + 4, (const void *)v7[5 * v5 + 1], v8);
      ++v4;
      v3 += 14;
      v5 = (unsigned int)(v5 - 1);
      v6 = v4;
    }
    while ( v4 < 0x32 );
  }
  else
  {
    v6 = 0;
  }
  *a1 = v6;
  return result;
}
