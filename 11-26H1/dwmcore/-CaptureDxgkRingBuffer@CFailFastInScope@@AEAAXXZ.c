/*
 * XREFs of ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x18018F4B4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1801E0180 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall CFailFastInScope::CaptureDxgkRingBuffer(CFailFastInScope *this)
{
  int v2; // edi
  int v3; // edi
  void *v4; // rcx
  unsigned int *v5; // rax
  unsigned int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  unsigned int *v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+48h] [rbp-8h]
  unsigned int v13; // [rsp+60h] [rbp+10h] BYREF

  *((_QWORD *)this + 1) = 0LL;
  v13 = 0;
  v11 = &v13;
  v9 = 0LL;
  v10 = 9LL;
  v12 = 4LL;
  v2 = D3DKMTEscape(&v9);
  if ( v2 >= 0 )
    return;
  if ( v2 != -2147483643 )
  {
    v6 = 3627;
    goto LABEL_3;
  }
  v13 += 1028;
  v5 = (unsigned int *)operator new[](v13);
  *((_QWORD *)this + 1) = v5;
  if ( !v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xE32u, 0LL);
LABEL_4:
    v4 = (void *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      operator delete(v4);
      *((_QWORD *)this + 1) = 0LL;
    }
    return;
  }
  LODWORD(v12) = v13;
  v11 = v5;
  LODWORD(v10) = 9;
  *v5 = v13 - 4;
  v2 = D3DKMTEscape(&v9);
  if ( v2 < 0 )
  {
    v6 = 3643;
LABEL_3:
    v3 = v2 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v6, 0LL);
    if ( v3 >= 0 )
      return;
    goto LABEL_4;
  }
  v7 = (_DWORD *)*((_QWORD *)this + 1);
  v8 = (unsigned int)(*v7 + 4);
  v13 = v8;
  if ( (unsigned int)v8 > 0x2000 )
  {
    memmove_0(v7, (char *)v7 + v8 - 0x2000, 0x2000uLL);
    LODWORD(v8) = 0x2000;
    **((_DWORD **)this + 1) = 8188;
    v13 = 0x2000;
  }
  MilWerRegisterMemoryBlock(*((const void **)this + 1), v8);
}
