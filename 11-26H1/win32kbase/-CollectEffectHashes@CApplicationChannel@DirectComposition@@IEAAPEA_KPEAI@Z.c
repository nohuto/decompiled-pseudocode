/*
 * XREFs of ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x1401B2E18
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     DirectComposition::Memory::Allocate_0 @ 0x1400B3D64 (DirectComposition--Memory--Allocate_0.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 *__fastcall DirectComposition::CApplicationChannel::CollectEffectHashes(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        int a3)
{
  _QWORD *v3; // r14
  unsigned __int64 *v4; // rsi
  __int64 v5; // rdi
  unsigned int v7; // ebx
  char v9; // al
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  char v12; // al
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  _QWORD *i; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *j; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 *result; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 58);
  v4 = 0LL;
  v5 = 0LL;
  v7 = 0;
  while ( v3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 40LL))(v3);
    v3 = (_QWORD *)v3[1];
    v10 = v7 + 1;
    if ( !v9 )
      v10 = v7;
    v7 = v10;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 59);
  while ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 40LL))(v11);
    v11 = (_QWORD *)v11[1];
    v13 = v7 + 1;
    if ( !v12 )
      v13 = v7;
    v7 = v13;
  }
  if ( v7 )
  {
    v14 = 8LL * v7;
    if ( v14 <= 0xFFFFFFFF )
    {
      v4 = (unsigned __int64 *)DirectComposition::Memory::Allocate_0((unsigned int)v14, 0x66624344u, a3);
      if ( v4 )
      {
        for ( i = (_QWORD *)*((_QWORD *)this + 58); i; i = (_QWORD *)i[1] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*i + 40LL))(i) )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 112LL))(i);
            if ( v16 )
            {
              v17 = *(_QWORD *)(v16 + 88);
              if ( v17 )
              {
                v4[v5] = v17;
                v5 = (unsigned int)(v5 + 1);
              }
            }
          }
        }
        for ( j = (_QWORD *)*((_QWORD *)this + 59); j; j = (_QWORD *)j[1] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*j + 40LL))(j) )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD *))(*j + 112LL))(j);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 88);
              if ( v20 )
              {
                v4[v5] = v20;
                v5 = (unsigned int)(v5 + 1);
              }
            }
          }
        }
      }
    }
  }
  result = v4;
  *a2 = v5;
  return result;
}
