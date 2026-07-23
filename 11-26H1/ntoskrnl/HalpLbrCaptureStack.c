/*
 * XREFs of HalpLbrCaptureStack @ 0x1403F1700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpLbrCaptureStack(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // ebp
  unsigned int v8; // r14d
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r13d
  unsigned __int64 *v13; // r15
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  char v16; // al

  v3 = 0LL;
  v5 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( !dword_140F87A34 )
    return 3221225659LL;
  v8 = dword_140F87A2C;
  if ( a1 < 24 * dword_140F87A2C )
    return 3221225476LL;
  v9 = dword_140F87A40;
  if ( dword_140F87A40 == 1 )
  {
    v10 = __readmsr(0x1C9u);
    v7 = (dword_140F87A2C - 1) & v10;
  }
  if ( dword_140F87A2C )
  {
    v11 = 5632;
    v12 = -1073675519;
    v13 = (unsigned __int64 *)(a2 + 16);
    while ( 1 )
    {
      if ( v9 == 1 )
      {
        v14 = (v7 - v11 + 5632) % v8;
        v3 = __readmsr(v14 + 1664);
        v6 = __readmsr(v14 + 1728);
        if ( !HalpLbrInfoSupported )
          goto LABEL_11;
        v15 = v14 + 3520;
      }
      else
      {
        if ( v9 != 2 )
        {
          if ( v9 == 3 )
          {
            v3 = __readmsr(v12 - 1);
            v6 = __readmsr(v12);
          }
          goto LABEL_11;
        }
        v3 = __readmsr(v11 - 256);
        v15 = v11 - 1024;
        v6 = __readmsr(v11);
      }
      v5 = __readmsr(v15);
LABEL_11:
      if ( v3 )
      {
        v16 = HalpLbrMostSignificantFromAddrBit;
        ++v11;
        *v13 = v5;
        v12 += 2;
        *(v13 - 2) = (__int64)(v3 << (63 - v16)) >> (63 - v16);
        *(v13 - 1) = (__int64)(v6 << (63 - HalpLbrMostSignificantToAddrBit)) >> (63 - HalpLbrMostSignificantToAddrBit);
        v13 += 3;
        *a3 += 24;
        if ( v11 - 5632 < v8 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
