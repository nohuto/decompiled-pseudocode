/*
 * XREFs of ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1401BE930
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIdenticalFormat(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v4; // r8d
  int v5; // r10d
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int *v12; // rax

  v2 = *(_DWORD *)(a1 + 24);
  v4 = 1;
  if ( (v2 & 2) != 0 )
  {
    v12 = *(int **)(a1 + 112);
    v6 = *v12;
    v5 = v12[1];
    v7 = v12[2];
  }
  else
  {
    v5 = 65280;
    if ( (v2 & 4) != 0 )
    {
      v6 = 255;
      v7 = 16711680;
    }
    else
    {
      v6 = 16711680;
      v7 = 255;
    }
  }
  v8 = 31744;
  if ( a2 != 4 )
    v8 = 16711680;
  if ( v6 != v8 )
    return 0;
  v9 = 992;
  if ( a2 != 4 )
    v9 = 65280;
  if ( v5 != v9 )
    return 0;
  v10 = 31;
  if ( a2 != 4 )
    v10 = 255;
  if ( v7 != v10 )
    return 0;
  return v4;
}
