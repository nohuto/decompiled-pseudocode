/*
 * XREFs of WheaGetErrorSourceInfo @ 0x14084E4C0
 * Callers:
 *     PopReadWheaBootErrorCount @ 0x140CD690C (PopReadWheaBootErrorCount.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaGetErrorSourceInfo(int a1, unsigned int *a2, __int64 *a3)
{
  __int64 v3; // r11
  unsigned int v4; // ebx
  __int64 Pool2; // r10
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // esi
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int i; // r8d
  __int64 v16; // rcx
  __int64 result; // rax

  v3 = qword_140EEF0D8;
  v4 = 0;
  *a2 = 0;
  Pool2 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( dword_140EEF0CC && (__int64 *)v3 != &qword_140EEF0D8 )
  {
    do
    {
      if ( v9 >= dword_140EEF0CC )
        break;
      v12 = *(_DWORD *)(v3 + 40) == a1;
      v13 = v10 + 1;
      v3 = *(_QWORD *)v3;
      if ( !v12 )
        v13 = v10;
      ++v9;
      v10 = v13;
    }
    while ( (__int64 *)v3 != &qword_140EEF0D8 );
    if ( v10 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v14 = qword_140EEF0D8;
        for ( i = 0; (__int64 *)v14 != &qword_140EEF0D8 && i < dword_140EEF0CC && v4 < v10; ++i )
        {
          if ( *(_DWORD *)(v14 + 40) == a1 )
          {
            v16 = v4++;
            *(_DWORD *)(Pool2 + 8 * v16 + 4) = *(_DWORD *)(v14 + 124);
            *(_DWORD *)(Pool2 + 8 * v16) = *(_DWORD *)(v14 + 24);
          }
          v14 = *(_QWORD *)v14;
        }
      }
      else
      {
        v11 = -1073741801;
      }
    }
  }
  result = v11;
  *a2 = v10;
  *a3 = Pool2;
  return result;
}
