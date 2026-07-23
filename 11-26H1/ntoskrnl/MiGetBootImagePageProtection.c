/*
 * XREFs of MiGetBootImagePageProtection @ 0x140D062A0
 * Callers:
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 * Callees:
 *     MiComputeDriverProtection @ 0x140B47B54 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiGetBootImagePageProtection(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  _DWORD *v6; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax

  v4 = a1;
  v5 = 0LL;
  v6 = (_DWORD *)*a4;
  if ( !*a4 )
    goto LABEL_7;
  v10 = v6[3];
  if ( v4 < v10 )
    goto LABEL_7;
  v11 = v6[4];
  if ( v11 < v6[2] )
    v11 = v6[2];
  if ( v4 < v10 + v11 )
  {
    v12 = MiComputeDriverProtection(v6[9]);
  }
  else
  {
LABEL_7:
    v13 = a2 + *(unsigned __int16 *)(a2 + 20) + 24LL;
    v14 = v13 + 40LL * *(unsigned __int16 *)(a2 + 6);
    v12 = 1;
    while ( v13 < v14 )
    {
      if ( v4 < *(_DWORD *)(v13 + 12) )
        goto LABEL_12;
      v15 = MiComputeDriverProtection(*(_DWORD *)(v13 + 36));
      v5 = v16;
      v12 = v15;
      v13 = v16 + 40;
    }
    v5 = 0LL;
    v12 = (*(_DWORD *)(a3 + 16) >> 5) & 0x1F;
  }
LABEL_12:
  if ( (MiFlags & 0x20000) != 0 && (v12 & 6) == 6 )
    v12 = 3;
  result = v12;
  *a4 = v5;
  return result;
}
