/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x14003AB8C
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x14003A9D0 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     ?HasMargins@LetterboxingMargins@PresentedContentUpdateInfo@@QEBA_NXZ @ 0x14003AE80 (-HasMargins@LetterboxingMargins@PresentedContentUpdateInfo@@QEBA_NXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  int v4; // eax
  unsigned int v5; // edx
  char *v6; // r10
  __int64 v7; // rax
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  bool HasMargins; // al
  __int64 v17; // r8
  char v18; // r9
  unsigned __int8 *v19; // r10
  int v20; // eax
  _QWORD *v21; // rcx
  int v22; // edx
  _QWORD *v23; // rcx

  v2 = *((_DWORD *)a2 + 34);
  if ( *((_DWORD *)this + 21) != v2 )
    *((_DWORD *)this + 21) = v2;
  v4 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 22) == v4 )
  {
    v5 = *((_DWORD *)this + 46);
  }
  else
  {
    v5 = *((_DWORD *)this + 46) & 0xFFFFDFFF | (v4 != 0 ? 0x2000 : 0);
    *((_DWORD *)this + 46) = v5;
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 35);
  }
  v6 = (char *)a2 + 152;
  v7 = *((int *)v6 + 13);
  if ( *((_QWORD *)this + 7) != v7 )
  {
    *((_QWORD *)this + 7) = v7;
    v5 = v5 & 0xFFFFFFFE | (v7 != 0);
    *((_DWORD *)this + 46) = v5;
  }
  if ( (((unsigned __int8)*v6 ^ (unsigned __int8)(v5 >> 1)) & 1) != 0 )
    *((_DWORD *)this + 46) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * *v6)) & 2;
  v8 = *((_DWORD *)v6 + 12);
  if ( *((_DWORD *)this + 24) != v8 )
    *((_DWORD *)this + 24) = v8;
  if ( *((_DWORD *)this + 25) != *((_DWORD *)v6 + 1)
    || *((_DWORD *)this + 26) != *((_DWORD *)v6 + 2)
    || *((_DWORD *)this + 27) != *((_DWORD *)v6 + 3)
    || *((_DWORD *)this + 28) != *((_DWORD *)v6 + 4) )
  {
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)(v6 + 4);
  }
  v9 = (float *)((char *)this + 120);
  v10 = 6LL;
  do
  {
    v11 = *(float *)((char *)v9 + v6 - (char *)this - 96);
    if ( *v9 != v11 )
      *v9 = v11;
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = *((float *)v6 + 14);
  if ( *((float *)this + 36) != v12 )
    *((float *)this + 36) = v12;
  v13 = *((float *)v6 + 15);
  if ( *((float *)this + 37) != v13 )
    *((float *)this + 37) = v13;
  v14 = *((float *)v6 + 16);
  if ( *((float *)this + 38) != v14 )
    *((float *)this + 38) = v14;
  v15 = *((float *)v6 + 17);
  if ( *((float *)this + 39) != v15 )
    *((float *)this + 39) = v15;
  HasMargins = PresentedContentUpdateInfo::LetterboxingMargins::HasMargins((PresentedContentUpdateInfo::LetterboxingMargins *)(v6 + 56));
  if ( ((*(_DWORD *)(v17 + 184) >> 15) & 1) != HasMargins )
  {
    v18 = 1;
    *(_DWORD *)(v17 + 184) = (HasMargins << 15) | *(_DWORD *)(v17 + 184) & 0xFFFF7FFF;
  }
  v20 = *((_DWORD *)v19 + 5);
  v21 = *(_QWORD **)(v17 + 272);
  v22 = 0;
  while ( v21 != (_QWORD *)(v17 + 272) )
  {
    if ( v22 == *(_DWORD *)(v17 + 396) )
    {
      v23 = v21 - 1;
      if ( v23 && *((_DWORD *)v23 + 6) == 4 )
        v20 = 3;
      break;
    }
    v21 = (_QWORD *)*v21;
    ++v22;
  }
  if ( *(_DWORD *)(v17 + 48) != v20 )
  {
    *(_DWORD *)(v17 + 48) = v20;
    v18 = 1;
  }
  if ( (((*v19 >> 1) ^ (unsigned __int8)BYTE2(*(_DWORD *)(v17 + 184))) & 1) != 0 )
  {
    v18 = 1;
    *(_DWORD *)(v17 + 184) ^= (*(_DWORD *)(v17 + 184) ^ (*v19 >> 1 << 16)) & 0x10000;
  }
  return v18;
}
