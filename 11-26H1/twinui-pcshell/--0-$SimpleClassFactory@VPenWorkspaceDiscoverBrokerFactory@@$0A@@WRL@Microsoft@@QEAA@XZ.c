/*
 * XREFs of ??0?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180182D00
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@12@@Z @ 0x1802BB30C (--$MakeAndInitialize@V-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsof.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>::`vftable';
  return result;
}
