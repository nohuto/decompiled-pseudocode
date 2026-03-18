/*
 * XREFs of ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1401C877C
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGISET(const unsigned __int16 *a1, unsigned int a2, struct _GISET *a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // r10
  __int64 v10; // rdx
  const unsigned __int16 *v11; // r9
  int v12; // r9d
  int v13; // ecx

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    do
    {
      v10 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v10 < a2 )
      {
        v11 = &a1[v10];
        do
        {
          if ( *v11 - a1[(unsigned int)(v10 - 1)] > 1 )
            break;
          LODWORD(v10) = v10 + 1;
          ++v11;
        }
        while ( (unsigned int)v10 < a2 );
      }
      v12 = a1[v5];
      v13 = a1[(unsigned int)(v10 - 1)] - v12 + 1;
      v4 += v13;
      if ( a3 )
      {
        *((_WORD *)a3 + 2 * v6 + 4) = v12;
        *((_WORD *)a3 + 2 * v6 + 5) = v13;
      }
      v6 = (unsigned int)(v6 + 1);
      v5 = v10;
    }
    while ( (unsigned int)v10 < a2 );
  }
  if ( a3 )
  {
    *((_DWORD *)a3 + 1) = a4;
    *(_DWORD *)a3 = v4;
  }
  return (unsigned int)v6;
}
