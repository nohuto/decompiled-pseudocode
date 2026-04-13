/*
 * XREFs of ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x1800053AC
 * Callers:
 *     ??_G_Locimp@locale@std@@MEAAPEAXI@Z @ 0x180005240 (--_G_Locimp@locale@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800050E0 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180005170 (--1_Lockit@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v5, 0);
  v2 = *((_QWORD *)a1 + 3);
  while ( v2 )
  {
    --v2;
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v2);
    if ( v3 )
    {
      v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v4 )
        (**v4)(v4, 1LL);
    }
  }
  free(*((void **)a1 + 2));
  std::_Lockit::~_Lockit((std::_Lockit *)&v5);
}
