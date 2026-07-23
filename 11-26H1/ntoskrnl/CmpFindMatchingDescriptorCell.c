/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x140A87208
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x1404B1A48 (RtlLengthSecurityDescriptorStrict.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, _DWORD *a2, int a3, _DWORD *a4, int **a5)
{
  unsigned int v8; // eax
  size_t v9; // r15
  unsigned int v10; // r10d
  int v11; // edi
  _DWORD *i; // r11
  _QWORD **v13; // r14
  _QWORD *v14; // rsi
  int *v16; // rbx
  int v17; // ebp

  v8 = RtlLengthSecurityDescriptorStrict();
  v9 = v8;
  v10 = v8 >> 2;
  v11 = 0;
  for ( i = a2; v10; --v10 )
    v11 = *i++ + __ROR4__(v11, 29);
  v13 = (_QWORD **)(a1 + 16 * ((v11 & 0x3F) + 119LL));
  v14 = *v13;
  if ( *v13 != v13 )
  {
    while ( v14 != v13 )
    {
      v16 = (int *)(v14 - 1);
      if ( *((_DWORD *)v14 - 1) == v11 )
      {
        v17 = *v16;
        if ( a3 == (unsigned int)*v16 >> 31 && (_DWORD)v9 == v16[6] && !memcmp(a2, v16 + 8, v9) )
        {
          *a4 = v17;
          if ( a5 )
            *a5 = v16;
          return 1;
        }
      }
      v14 = (_QWORD *)*v14;
    }
  }
  return 0;
}
