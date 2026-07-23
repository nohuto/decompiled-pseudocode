/*
 * XREFs of RtlpMergeContextXState @ 0x1800CA890
 * Callers:
 *     RtlCaptureContext2 @ 0x180126BF0 (RtlCaptureContext2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMergeContextXState(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  char *v6; // rbx
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = a1 + 308;
  v3 = (int)a1[312];
  result = (unsigned int)(MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
  v6 = (char *)a1 + v3;
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0
    && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0
    && *v2 <= (int)v3
    && a1[309] + a1[308] >= (int)v3 + a1[313] )
  {
    v7 = (char *)v2 + v3;
    if ( (_DWORD *)((char *)v2 + v3) )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v8 = *((_QWORD *)v7 + 1);
        if ( (v8 & 0x800) == 0 )
          return result;
        v9 = 576LL;
        if ( (v8 & 4) != 0 )
          v9 = (unsigned int)(MEMORY[0x7FFE060C] + 576);
        if ( (v8 & 8) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0610] + v9);
        }
        if ( (v8 & 0x10) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0614] + v9);
        }
        if ( (v8 & 0x20) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0618] + v9);
        }
        if ( (v8 & 0x40) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE061C] + v9);
        }
        if ( (v8 & 0x80u) != 0LL )
        {
          if ( MEMORY[0x7FFE05F8] < 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0620] + v9);
        }
        if ( (v8 & 0x100) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0624] + v9);
        }
        if ( (v8 & 0x200) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE0628] + v9);
        }
        if ( (v8 & 0x400) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
            LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
          v9 = (unsigned int)(MEMORY[0x7FFE062C] + v9);
        }
        if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
          v9 = ((_DWORD)v9 + 63) & 0xFFFFFFC0;
      }
      else
      {
        v9 = MEMORY[0x7FFE0448];
      }
      result = (__int64)&v7[v9 - 512];
      if ( result )
      {
        v10 = *((_QWORD *)v6 + 154);
        if ( a2 )
        {
          *((_QWORD *)v6 + 154) = v10 | 0x800;
          *(_QWORD *)result = 1LL;
          *(_QWORD *)(result + 8) = a2;
        }
        else
        {
          *((_QWORD *)v6 + 154) = v10 & 0xFFFFFFFFFFFFF7FFuLL;
          *(_QWORD *)result = 0LL;
          *(_QWORD *)(result + 8) = 0LL;
        }
      }
    }
  }
  return result;
}
