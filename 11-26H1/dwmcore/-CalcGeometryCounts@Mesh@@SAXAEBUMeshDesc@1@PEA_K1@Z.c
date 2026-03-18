/*
 * XREFs of ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18000CB60
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18000CB60 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18000CB60 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall Mesh::CalcGeometryCounts(const struct Mesh::MeshDesc *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v5; // rdx
  int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  char v11; // r12
  unsigned __int64 v12; // r14
  int v13; // r15d
  int v14; // r8d
  int v15; // r10d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  int v22; // xmm0_4
  char v23; // al
  __int64 v24; // r11
  __int64 v25; // rax
  char v26; // si
  unsigned int v27; // r8d
  char v28; // cl
  bool v29; // cf
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-88h] BYREF
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h]
  _DWORD *v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  char *v36; // [rsp+48h] [rbp-60h]
  int v37; // [rsp+50h] [rbp-58h]
  char v38; // [rsp+54h] [rbp-54h]
  char v39; // [rsp+55h] [rbp-53h]
  _DWORD v40[4]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0LL;
  if ( !*((_BYTE *)a1 + 52) )
  {
    v9 = *((_QWORD *)a1 + 1);
    v10 = 0LL;
    if ( v9 < 3 )
    {
LABEL_12:
      *a2 = v10;
      *a3 = v5;
      return;
    }
    v10 = *((_QWORD *)a1 + 1);
    v11 = *((_BYTE *)a1 + 53);
    v12 = v9 - 2;
    v13 = *((_DWORD *)a1 + 12);
    if ( !v11 )
    {
      v12 = 0LL;
      v10 = 0LL;
    }
    if ( !v13 )
    {
LABEL_11:
      v5 = 3 * v12;
      goto LABEL_12;
    }
    v24 = *((_QWORD *)a1 + 3);
    v25 = (unsigned int)(v9 - 1);
    if ( *(_DWORD *)(v24 + 4 * v25) == 3 )
    {
      switch ( v13 )
      {
        case 3:
          v26 = *(_BYTE *)((unsigned int)v25 + *((_QWORD *)a1 + 5)) == 0;
          goto LABEL_27;
        case 1:
          v26 = 1;
          goto LABEL_27;
        case 2:
          v26 = *(_BYTE *)((unsigned int)v25 + *((_QWORD *)a1 + 5));
          goto LABEL_27;
      }
    }
    v26 = 0;
LABEL_27:
    v27 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v24 + 4 * v5) != 3 )
        goto LABEL_29;
      if ( v13 == 3 )
        break;
      if ( v13 == 1 )
      {
LABEL_35:
        v29 = v26 != 0;
        v26 = 1;
        v30 = 2 * (2LL - v29);
        if ( v11 )
          v30 = 2LL - v29;
        v10 += v30;
        v12 += 2LL;
        goto LABEL_30;
      }
      if ( v13 == 2 )
      {
        v28 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5));
LABEL_34:
        if ( v28 )
          goto LABEL_35;
      }
LABEL_29:
      v26 = 0;
LABEL_30:
      v5 = ++v27;
      if ( v27 >= v9 )
        goto LABEL_11;
    }
    v28 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5)) == 0;
    goto LABEL_34;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = *((_DWORD *)a1 + 12);
  if ( v7 && v7 != 1 )
    goto LABEL_14;
  v8 = *((_DWORD *)a1 + 6);
  if ( !v8 )
  {
    if ( *((_BYTE *)a1 + 53) )
    {
      *a2 = 4LL;
      *a3 = 6LL;
    }
    return;
  }
  if ( v8 == 50529027 )
  {
    if ( v7 == 1 )
    {
      *a2 = 8LL;
    }
    else if ( *((_BYTE *)a1 + 53) )
    {
      *a2 = 4LL;
    }
    if ( *((_DWORD *)a1 + 12) == 1 )
      *a3 += 24LL;
    if ( *((_BYTE *)a1 + 53) )
      *a3 += 6LL;
  }
  else
  {
LABEL_14:
    v14 = *((_DWORD *)a1 + 6);
    v15 = 2;
    v16 = v14 & 0x3000000;
    if ( (v14 & 0x3000000) == 0x3000000 )
    {
      v17 = 3;
    }
    else if ( v16 == 0x2000000 )
    {
      v17 = 2;
    }
    else
    {
      v17 = v16 == 0x1000000;
    }
    v40[3] = v17;
    switch ( v14 & 3 )
    {
      case 1:
        v18 = 1;
        break;
      case 2:
        v18 = 2;
        break;
      case 3:
        v18 = 3;
        break;
      default:
        v18 = 0;
        break;
    }
    v40[0] = v18;
    v19 = v14 & 0x300;
    if ( v19 == 768 )
    {
      v20 = 3;
    }
    else if ( v19 == 512 )
    {
      v20 = 2;
    }
    else
    {
      v20 = v19 == 256;
    }
    v21 = v14 & 0x30000;
    v40[1] = v20;
    if ( v21 == 196608 )
    {
      v15 = 3;
    }
    else if ( v21 == 0x10000 )
    {
      v15 = 1;
    }
    else if ( v21 != 0x20000 )
    {
      v15 = 0;
    }
    v22 = *(_DWORD *)a1;
    v34 = v40;
    v38 = 0;
    v36 = (char *)a1 + 28;
    v37 = *((_DWORD *)a1 + 12);
    v23 = *((_BYTE *)a1 + 53);
    v33 = 0LL;
    v35 = 0LL;
    v39 = v23;
    v31 = v22;
    v40[2] = v15;
    v32 = 4LL;
    Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v31, a2, a3);
  }
}
