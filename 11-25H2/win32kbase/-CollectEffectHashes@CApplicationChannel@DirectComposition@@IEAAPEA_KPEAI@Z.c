/*
 * XREFs of ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x140228778
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     DirectComposition::Memory::Allocate_0 @ 0x1400692E8 (DirectComposition--Memory--Allocate_0.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

unsigned __int64 *__fastcall DirectComposition::CApplicationChannel::CollectEffectHashes(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        __int64 a3,
        char a4)
{
  _QWORD *v4; // r14
  unsigned __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned int v8; // ebx
  char v10; // al
  unsigned int v11; // ecx
  _QWORD *v12; // r14
  char v13; // al
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  _QWORD *i; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *j; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 *result; // rax

  v4 = (_QWORD *)*((_QWORD *)this + 58);
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0;
  while ( v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 40LL))(v4);
    v4 = (_QWORD *)v4[1];
    v11 = v8 + 1;
    if ( !v10 )
      v11 = v8;
    v8 = v11;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 59);
  while ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 40LL))(v12);
    v12 = (_QWORD *)v12[1];
    v14 = v8 + 1;
    if ( !v13 )
      v14 = v8;
    v8 = v14;
  }
  if ( v8 )
  {
    v15 = 8LL * v8;
    if ( v15 <= 0xFFFFFFFF )
    {
      v5 = (unsigned __int64 *)DirectComposition::Memory::Allocate_0((unsigned int)v15, 1717715780LL, a3, a4);
      if ( v5 )
      {
        for ( i = (_QWORD *)*((_QWORD *)this + 58); i; i = (_QWORD *)i[1] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*i + 40LL))(i) )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 120LL))(i);
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 88);
              if ( v18 )
              {
                v5[v6] = v18;
                v6 = (unsigned int)(v6 + 1);
              }
            }
          }
        }
        for ( j = (_QWORD *)*((_QWORD *)this + 59); j; j = (_QWORD *)j[1] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*j + 40LL))(j) )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD *))(*j + 120LL))(j);
            if ( v20 )
            {
              v21 = *(_QWORD *)(v20 + 88);
              if ( v21 )
              {
                v5[v6] = v21;
                v6 = (unsigned int)(v6 + 1);
              }
            }
          }
        }
      }
    }
  }
  result = v5;
  *a2 = v6;
  return result;
}
