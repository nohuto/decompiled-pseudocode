/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1400A5AF4
 * Callers:
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A5900 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A5974 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A59E8 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1400A5450 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1400A5F4C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1401499F4 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // r15d
  int v8; // r12d
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  __int64 v12; // xmm0_8
  _DWORD **v13; // rax
  unsigned int *v14; // r11
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // cl
  _DWORD *v24; // r8
  int v25; // edx
  int v26; // ecx
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  char *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // r10d
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // r10d
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  int v43; // ecx
  __int64 v44; // r8
  __int64 *v45; // rdx
  __int64 v46; // xmm0_8
  int v47; // ecx
  int v48; // eax
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // r13
  _DWORD *v52; // rax
  __int64 v53; // [rsp+20h] [rbp-20h] BYREF
  int v54; // [rsp+28h] [rbp-18h]
  __int64 v55; // [rsp+30h] [rbp-10h] BYREF
  int v56; // [rsp+38h] [rbp-8h]

  v5 = 0;
  v8 = a2;
  *a5 = 0;
  if ( (_DWORD)a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a4 + 8) )
      {
LABEL_15:
        v21 = *(_DWORD *)(a4 + 8);
        v22 = v21 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8LL * (unsigned int)(v21 - 1)) + 4LL) == -1;
        if ( *(_DWORD *)a3 <= *(_DWORD *)(a3 + 4) && !v22 && (v8 == 8 || v8 == 1) )
        {
          v26 = *(_DWORD *)(a3 + 8);
          v55 = *(_QWORD *)a3;
          v56 = v26;
          *a5 |= v26 != 0;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v55,
                 *(unsigned int *)(a4 + 8));
          if ( v5 >= 0 )
            *a5 = 1;
        }
        return (unsigned int)v5;
      }
      v10 = *(_DWORD *)(a3 + 4);
      v11 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > v10 )
        goto LABEL_14;
      v12 = *(_QWORD *)a3;
      v54 = *(_DWORD *)(a3 + 8);
      v13 = *(_DWORD ***)a4;
      v53 = v12;
      v14 = v13[v9];
      if ( v11 < *v14 )
      {
        v54 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, *(unsigned int *)(a3 + 8));
        v38 = **(_DWORD **)(*(_QWORD *)a4 + 8 * v9) - 1;
        if ( v37 < v38 )
          v38 = v37;
        HIDWORD(v53) = v38;
        if ( v38 == -1 )
          v39 = -1;
        else
          v39 = v38 + 1;
        *(_DWORD *)a3 = v39;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v53,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v15 = v14[1];
        if ( v11 == *v14 )
        {
          v16 = *(unsigned int *)(a3 + 8);
          v17 = v14[2];
          if ( v10 >= v15 )
          {
            if ( v10 == v15 )
            {
              if ( v8 == 8 || v8 == 1 )
                v18 = v17 | v16;
              else
                v18 = v17 & ~(_DWORD)v16;
              *a5 |= v18 != (_DWORD)v17;
              v19 = HIDWORD(v53);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v9) + 8LL) = v18;
              if ( v19 == -1 )
                v20 = -1;
              else
                v20 = v19 + 1;
              *(_DWORD *)a3 = v20;
            }
            else
            {
              v33 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v17, v16);
              v34 = *(_QWORD *)(*(_QWORD *)a4 + 8 * v9);
              v35 = *(_DWORD *)(v34 + 4);
              HIDWORD(v53) = v35;
              if ( v35 == -1 )
                v36 = -1;
              else
                v36 = v35 + 1;
              *(_QWORD *)v34 = v53;
              *(_DWORD *)(v34 + 8) = v33;
              *(_DWORD *)a3 = v36;
            }
            goto LABEL_24;
          }
          v54 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v17, v16);
          v41 = *(_DWORD **)(*(_QWORD *)a4 + 8 * v9);
          v42 = v41[1];
          if ( v40 < v42 )
            v42 = v40;
          HIDWORD(v53) = v42;
          v43 = -1;
          if ( v42 != -1 )
            v43 = v42 + 1;
          *(_DWORD *)a3 = v43;
          *v41 = v42 + 1;
          v44 = (unsigned int)v9;
          goto LABEL_76;
        }
        if ( v10 >= v15 )
        {
          if ( v11 > v15 )
            goto LABEL_24;
          v54 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v14[2],
                  *(unsigned int *)(a3 + 8));
          v29 = *(_QWORD *)(*(_QWORD *)a4 + 8 * v9);
          v30 = *(_DWORD *)(v29 + 4);
          HIDWORD(v53) = v30;
          if ( v30 == -1 )
            v31 = -1;
          else
            v31 = v30 + 1;
          *(_DWORD *)a3 = v31;
          v44 = (unsigned int)(v9 + 1);
          *(_DWORD *)(v29 + 4) = v53 - 1;
LABEL_76:
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v53,
                 v44);
          if ( v5 >= 0 )
          {
            LODWORD(v9) = v9 + 1;
            *a5 = 1;
          }
          goto LABEL_24;
        }
        v54 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v14[2], *(unsigned int *)(a3 + 8));
        v45 = *(__int64 **)(*(_QWORD *)a4 + 8 * v9);
        v46 = *v45;
        v56 = *((_DWORD *)v45 + 2);
        HIDWORD(v55) = HIDWORD(v46);
        v47 = HIDWORD(v53) + 1;
        v48 = v53;
        LODWORD(v55) = HIDWORD(v53) + 1;
        if ( HIDWORD(v53) == -1 )
          v47 = -1;
        *(_DWORD *)a3 = v47;
        *((_DWORD *)v45 + 1) = v48 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v53,
               (unsigned int)(v9 + 1));
        if ( v5 >= 0 )
        {
          v49 = (unsigned int)(v9 + 2);
          *a5 = 1;
          LODWORD(v9) = v9 + 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v55,
                 v49);
        }
        v50 = v9 + 1;
        if ( v5 < 0 )
          v50 = v9;
        LODWORD(v9) = v50;
      }
LABEL_24:
      v24 = *(_DWORD **)(*(_QWORD *)a4 + 8LL * (unsigned int)v9);
      v25 = v24[2];
      if ( v25 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_26;
        v51 = (unsigned int)(v9 - 1);
        v52 = *(_DWORD **)(*(_QWORD *)a4 + 8 * v51);
        if ( v25 != v52[2] )
          goto LABEL_26;
        *v24 = *v52;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v51,
          (__int64)v24,
          0xFFFFFFFFLL);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9,
          (__int64)v24,
          0xFFFFFFFFLL);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_26:
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
      {
LABEL_14:
        if ( v5 < 0 )
          return (unsigned int)v5;
        goto LABEL_15;
      }
    }
  }
  if ( *(_DWORD *)(a4 + 8) != 1
    || (v27 = **(_DWORD ***)a4, v27[2] != *(_DWORD *)(a3 + 8))
    || *v27 != *(_DWORD *)a3
    || v27[1] != *(_DWORD *)(a3 + 4) )
  {
    v28 = 0LL;
    for ( *a5 = 1; (unsigned int)v28 < *(_DWORD *)(a4 + 8); v28 = (unsigned int)(v28 + 1) )
    {
      v32 = *(char **)(*(_QWORD *)a4 + 8 * v28);
      if ( v32 )
        GreDeleteFastMutex(v32, a2, a3, a4);
    }
    *(_DWORD *)(a4 + 8) = 0;
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
