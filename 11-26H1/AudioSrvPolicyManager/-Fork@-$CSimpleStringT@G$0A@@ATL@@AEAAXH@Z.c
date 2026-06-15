/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004F10
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004EA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180049868 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18003E17C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // r14
  _QWORD *v5; // rdi
  int v6; // ebp
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  void *v12; // rbx
  size_t v13; // r8
  signed __int32 v14; // eax
  bool v15; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (char *)*a1 - 24;
  v6 = *((_DWORD *)v5 + 2);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  v8 = (**v7)(v7, a2, 2LL);
  v11 = v8;
  if ( !v8 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v12 = (void *)(v8 + 24);
  if ( v6 < (int)a2 )
    a2 = v6;
  v13 = 2LL * (int)(a2 + 1);
  if ( v13 )
  {
    if ( v8 != -24 )
    {
      if ( v2 )
      {
        memcpy_0(v12, v2, v13);
        goto LABEL_8;
      }
      memset_0(v12, 0, v13);
    }
    *(_DWORD *)_o__errno(v10, v9) = 22;
    invalid_parameter_noinfo();
  }
LABEL_8:
  *(_DWORD *)(v11 + 8) = v6;
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF);
  v15 = v14 <= 1;
  result = (unsigned int)(v14 - 1);
  if ( v15 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, size_t))(*(_QWORD *)*v5 + 8LL))(*v5, v5, v13);
  *a1 = v12;
  return result;
}
