/*
 * XREFs of GetPrintableAttributeName @ 0x140A701D8
 * Callers:
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     EncodeAttributeName @ 0x14081EA38 (EncodeAttributeName.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  void *v8; // r15
  size_t v9; // r13
  unsigned int v10; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // r14
  _WORD *v14; // rdi
  size_t v15; // r8
  const void *v16; // rdx
  const wchar_t *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+20h] [rbp-48h]
  void *v22; // [rsp+28h] [rbp-40h] BYREF

  v21 = 0;
  v22 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 || (v9 = *(unsigned int *)(a1 + 1), *a5 = 5, a2 - 5 < (unsigned int)v9) )
    {
      v6 = 1336;
      goto LABEL_9;
    }
    if ( a3 == -8 )
    {
      v10 = v9 + 2;
      if ( (int)v9 + 2 < (unsigned int)v9 )
      {
LABEL_8:
        v6 = 534;
LABEL_9:
        SddlpFree(v8);
        return v6;
      }
    }
    else
    {
      v18 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v9, (__int64 *)&v22);
      v8 = v22;
      v6 = v18;
      if ( v18 )
        goto LABEL_9;
      v19 = -1LL;
      do
        ++v19;
      while ( *((_WORD *)v22 + v19) );
      v20 = 2 * v19;
      v10 = 2 * v19 + 2;
      v21 = v20;
      if ( v10 < v20 )
        goto LABEL_8;
      switch ( a3 )
      {
        case -5:
          v7 = 8;
          v12 = v10 + 16;
          break;
        case -7:
          v7 = 6;
          v12 = v10 + 12;
          break;
        case -6:
          v7 = 10;
          v12 = v10 + 20;
          break;
        case -4:
          v7 = 7;
          v12 = v10 + 14;
          break;
        default:
          goto LABEL_15;
      }
      if ( v12 < v10 )
        goto LABEL_8;
      v10 = v12;
    }
LABEL_15:
    v13 = v10;
    v14 = SddlpAlloc(v10);
    *a4 = v14;
    if ( !v14 )
    {
      v6 = 8;
      goto LABEL_9;
    }
    switch ( a3 )
    {
      case -5:
        v17 = L"@DEVICE.";
        break;
      case -7:
        v17 = L"@USER.";
        break;
      case -6:
        v17 = L"@RESOURCE.";
        break;
      case -4:
        v17 = L"@TOKEN.";
        break;
      default:
LABEL_20:
        if ( a3 == -8 )
        {
          v15 = v9;
          v16 = (const void *)(a1 + (unsigned int)*a5);
        }
        else
        {
          v15 = v21;
          v16 = v8;
        }
        memmove(&v14[v7], v16, v15);
        *a5 += v9;
        v14[(v13 >> 1) - 1] = 0;
        goto LABEL_9;
    }
    memmove(v14, v17, v7 * 2);
    goto LABEL_20;
  }
  return 87LL;
}
