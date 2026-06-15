/*
 * XREFs of ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x1800638E8
 * Callers:
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x18006383C (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUnsupportedConnectorFormats::GetBlob(
        CUnsupportedConnectorFormats *this,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebp
  int v8; // edi
  void *v9; // rcx
  char *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // r9
  int v14; // edx
  _DWORD *v15; // r8
  unsigned int v16; // ecx
  _WORD *v17; // r9
  int v18; // edx
  _WORD *v19; // r8
  unsigned int v20; // ecx
  _WORD *v21; // r9
  int v22; // edx
  _WORD *v23; // r8
  unsigned int v24; // ecx
  _DWORD *v25; // r9
  int v26; // edx
  _DWORD *v27; // r8
  unsigned __int8 *v28; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  pv = 0LL;
  v6 = (unsigned int)(*((__int16 *)this + 114) + *((__int16 *)this + 117));
  v7 = *((_DWORD *)this + 1083) + 10 + 2 * (*((__int16 *)this + 116) + *((__int16 *)this + 115) + 2 * v6);
  v8 = CTCoAllocPolicy::Alloc((void *)v6, 1u, v7, &pv);
  if ( v8 < 0 )
  {
    v10 = (char *)pv;
    goto LABEL_37;
  }
  if ( v7 >= 2 )
  {
    v10 = (char *)pv;
    *(_WORD *)pv = 10;
    if ( v7 - 2 >= 2 )
    {
      *((_WORD *)v10 + 1) = *((_WORD *)this + 114);
      v12 = v7 - 4;
      v13 = v10 + 4;
      v14 = 0;
      v15 = (_DWORD *)((char *)this + 4);
      while ( v14 < *((__int16 *)this + 114) )
      {
        if ( v12 < 4 )
        {
          v11 = 5931LL;
          goto LABEL_32;
        }
        *v13 = *v15;
        v12 -= 4;
        ++v13;
        ++v14;
        ++v15;
      }
      if ( v12 >= 2 )
      {
        *(_WORD *)v13 = *((_WORD *)this + 115);
        v16 = v12 - 2;
        v17 = (_WORD *)v13 + 1;
        v18 = 0;
        v19 = (_WORD *)((char *)this + 68);
        while ( v18 < *((__int16 *)this + 115) )
        {
          if ( v16 < 2 )
          {
            v11 = 5937LL;
            goto LABEL_32;
          }
          *v17 = *v19;
          v16 -= 2;
          ++v17;
          ++v18;
          v19 += 2;
        }
        if ( v16 >= 2 )
        {
          *v17 = *((_WORD *)this + 116);
          v20 = v16 - 2;
          v21 = v17 + 1;
          v22 = 0;
          v23 = (_WORD *)((char *)this + 100);
          while ( v22 < *((__int16 *)this + 116) )
          {
            if ( v20 < 2 )
            {
              v11 = 5943LL;
              goto LABEL_32;
            }
            *v21 = *v23;
            v20 -= 2;
            ++v21;
            ++v22;
            v23 += 2;
          }
          if ( v20 >= 2 )
          {
            *v21 = *((_WORD *)this + 117);
            v24 = v20 - 2;
            v25 = v21 + 1;
            v26 = 0;
            v27 = (_DWORD *)((char *)this + 164);
            while ( v26 < *((__int16 *)this + 117) )
            {
              if ( v24 < 4 )
              {
                v11 = 5949LL;
                goto LABEL_32;
              }
              *v25 = *v27;
              v24 -= 4;
              ++v25;
              ++v26;
              ++v27;
            }
            if ( v24 >= *((_DWORD *)this + 1083) )
            {
              memcpy_0(v25, (char *)this + 236, *((unsigned int *)this + 1083));
              *a3 = v7;
              v28 = (unsigned __int8 *)v10;
              v10 = 0LL;
              *a2 = v28;
            }
            else
            {
              v8 = -2147024774;
            }
            goto LABEL_37;
          }
          v11 = 5946LL;
        }
        else
        {
          v11 = 5940LL;
        }
      }
      else
      {
        v11 = 5934LL;
      }
    }
    else
    {
      v11 = 5928LL;
    }
LABEL_32:
    v8 = -2147024774;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007007ALL);
LABEL_37:
    v9 = v10;
    goto LABEL_38;
  }
  v8 = -2147024774;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1725,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007007ALL);
  v9 = pv;
LABEL_38:
  CoTaskMemFree(v9);
  return (unsigned int)v8;
}
