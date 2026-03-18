/*
 * XREFs of PopBcdCopyLoaderObjectSettings @ 0x1407E15C4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     PopBcdReadElement @ 0x1409D37A8 (PopBcdReadElement.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdCopyLoaderObjectSettings(__int64 a1, __int64 a2)
{
  PVOID v3; // rcx
  __int64 v4; // rdi
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // r8
  int v9; // ebx
  _DWORD v11[4]; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0;
  v3 = 0LL;
  v11[0] = 369098768;
  P = 0LL;
  v4 = 0LL;
  v11[1] = 369098825;
  while ( (unsigned int)v4 < 2 )
  {
    v6 = v11[v4];
    v7 = PopBcdReadElement(a1, v6, &P, &v12);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -1073741275
        || (v9 = BiDeleteElement(a2, v6), ((v9 + 0x80000000) & 0x80000000) == 0) && v9 != -1073741275 )
      {
        v3 = P;
        goto LABEL_13;
      }
      v3 = P;
    }
    else
    {
      v9 = BcdSetElementDataWithFlags(a2, v6, v8, P, v12);
      ExFreePoolWithTag(P, 0);
      v3 = 0LL;
      P = 0LL;
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  v9 = 0;
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v9;
}
